#include <unistd.h>

void	ft_puthex(unsigned long nb)
{
	char	hex_digits_lower[] = "0123456789abcdef";

	if (nb >= 16)
	{
		ft_puthex(nb / 16); // Recursive call for higher digits
	}
	char c = hex_digits_lower[nb % 16]; // Map the last digit to its hex value
	write(1, &c, 1);                    // Write the character to stdout
}
