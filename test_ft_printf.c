#include <stdio.h>
#include "libftprintf.h"

void    test_int(void)
{
    printf("## Testing int ##");
    //Max Positive
    printf("Test:\t%d\n", 2147483647);
    ft_printf("Result:\t%d\n", 2147483647);

    //Max Neg
    printf("Test:\t%d\n", -2147483648);
    ft_printf("Result:\t%d\n", -2147483648);

    //Non-valid Underflow
    printf("Test:\t%d\n", -2147483649);
    ft_printf("Result:\t%d\n", -2147483649);
    printf("\n");
}
void    test_decimal(void)
{
    printf("## Testing Decimal ##");
    //Max Positive
    printf("Test:\t%i\n", 2147483647);
    ft_printf("Result:\t%i\n", 2147483647);

    //Max Neg
    printf("Test:\t%i\n", -2147483648);
    ft_printf("Result:\t%i\n", -2147483648);

    //Non-valid Underflow
    printf("Test:\t%i\n", -2147483649);
    ft_printf("Result:\t%i\n", -2147483649);
    printf("\n");
}
void    test_str(void)
{
    printf("## Testing String ##");
    //Sunshine
    printf("Test:\t** %s **\n", "Hello World");
    ft_printf("Result:\t** %s **\n", "Hello World");

    //NULL
    printf("Test:\t** %s **\n", NULL);
    ft_printf("Result:\t** %s **\n", NULL);

    //Empty
    printf("Test:\t** %s **\n", "");
    ft_printf("Result:\t** %s **\n", "");
    printf("\n");
}

void    test_unsigned_decimal(void)
{
    printf("## Testing unsinged ##");
    printf("Test:\t%u\n", 4294967295);
    ft_printf("Result:\t%u\n", 4294967295);
    printf("\n");
}

void    test_hex(void)
{

    printf("## Testing HEX ##\n");
    printf("Test\t :%x\n", 10);
    ft_printf("Result\t :%x\n", 10);
    printf("\n");
}
int main (void){
    test_int();
    test_decimal();
    test_str();
    test_unsigned_decimal();
    test_hex();
}