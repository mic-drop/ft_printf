#include "libftprintf.h"
#include <stdio.h>

void	test_int(void)
{
	int	test;
	int	result;

	printf("## Testing int ##\n");
	// Max Positive
	test = printf("Test:\t%d\n", 2147483647);
	result = ft_printf("Rest:\t%d\n", 2147483647);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", result);
	// Max Neg
	test = printf("Test:\t%d\n", -2147483648);
	result = ft_printf("Rest:\t%d\n", -2147483648);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", result);
	// Non-valid Underflow
	test = printf("Test:\t%d\n", -2147483649);
	result = ft_printf("Rest:\t%d\n", -2147483649);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", result);
	printf("\n");
}
void	test_decimal(void)
{
	int	test;
	int	rest;

	printf("## Testing Decimal ##\n");
	// Max Positive
	test = printf("Test:\t%i\n", 2147483647);
	rest = ft_printf("Rest:\t%i\n", 2147483647);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest - 2);
	// Max Neg
	test = printf("Test:\t%i\n", -2147483648);
	rest = ft_printf("Result:\t%i\n", -2147483648);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest - 2);
	// Non-valid Underflow
	test = printf("Test:\t%i\n", -2147483649);
	rest = ft_printf("Result:\t%i\n", -2147483649);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest - 2);
	printf("\n");
}
void	test_str(void)
{
	int	test;
	int	result;

	printf("## Testing String ##\n");
	// Sunshine
	test = printf("Test:\t** %s **\n", "Hello World");
	result = ft_printf("Rest:\t** %s **\n", "Hello World");
	printf("Test wrote\t %d chars\n", test);
	printf("Rest wrote\t %d chars\n", result);
	// NULL
	test = printf("Test:\t** %s **\n", NULL);
	result = ft_printf("Rest:\t** %s **\n", NULL);
	printf("Test wrote\t %d chars\n", test);
	printf("Rest wrote\t %d chars\n", result);
	// Empty
	test = printf("Test:\t** %s **\n", "");
	result = ft_printf("Result:\t** %s **\n", "");
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", result - 2);
	printf("\n");
}

void	test_unsigned_decimal(void)
{
	int	test;
	int	result;

	printf("## Testing unsinged ##\n");
	test = printf("Test:\t%u\n", 4294967295);
	printf("Test wrote\t %d chars\n", test);
	result = ft_printf("Rest:\t%u\n", 4294967295);
	printf("Result wrote\t %d chars\n", result);
	printf("\n");
}

void	test_hex(void)
{
	int	test;
	int	rest;

	printf("## Testing HEX ##\n");
	// Sunshine
	test = printf("Test\t :%x\n", 10);
	rest = ft_printf("Rest\t :%x\n", 10);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest);

	test = printf("Test\t :%X\n", 10);
	rest = ft_printf("Rest\t :%X\n", 10);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest);

	// Big int
	test = printf("Test\t :%x\n", 4294967295);
	rest = ft_printf("Rest\t :%x\n", 4294967295);
	printf("Test wrote\t %d chars\n", test);
	printf("Rest wrote\t %d chars\n", rest);


	test = printf("Test\t :%X\n", 4294967295);
	rest = ft_printf("Rest\t :%X\n", 4294967295);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest);


	// Negative - underflow
	test = printf("Test\t :%x\n", -2);
	rest = ft_printf("Rest\t :%x\n", -2);
	printf("Test wrote\t %d chars\n", test);
	printf("Rest wrote\t %d chars\n", rest);

	test = printf("Test\t :%X\n", -2);
	rest = ft_printf("Rest\t :%X\n", -2);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest);


	// All bases are base 10
	test = printf("Test\t :%x\n", 16);
	rest = ft_printf("Rest\t :%x\n", 16);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest);

	test = printf("Test\t :%X\n", 16);
	rest = ft_printf("Rest\t :%X\n", 16);
	printf("Test wrote\t %d chars\n", test);
	printf("Result wrote\t %d chars\n", rest);

	printf("\n");
}
int	main(void)
{
	// test_int();
	// test_decimal();
	// test_str();
	// test_unsigned_decimal();
	test_hex();
}