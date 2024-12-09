#include "libftprintf.h"

int	ft_puthex(unsigned long nb, char *hex)
{
    int counter;
    char c;

    counter = 0;
	if (nb >= 16)
	{
		counter += ft_puthex(nb / 16, hex); // Recursive call for higher digits
	}
	c = hex[nb % 16]; // Map the last digit to its hex value
	counter += ft_putchar(c);    // Write the character to stdout
    return(counter);
}
