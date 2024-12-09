#include "libftprintf.h"

void	ft_putnbr(long nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1); // Print negative sign
		nb = -nb;         // Convert to positive
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10); // Recursively print higher digits
	}
	c = (nb % 10) + '0'; // Get the last digit and convert to a character
	write(1, &c, 1);
}