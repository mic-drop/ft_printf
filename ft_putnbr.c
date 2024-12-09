#include "libftprintf.h"

int	ft_putnbr(long nb)
{
	char c;
	int counter;

	counter = 0;
	if (nb < 0)
	{
		counter += ft_putchar('-'); // Print negative sign
		nb = -nb;                  // Convert to positive
	}
	if (nb >= 10)
	{
		counter += ft_putnbr(nb / 10); // Recursively print higher digits
	}
	c = (nb % 10) + '0'; // Get the last digit and convert to a character
	counter += ft_putchar(c);
	return (counter);
}