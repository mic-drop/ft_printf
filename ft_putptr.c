#include "libftprintf.h"

int	ft_putptr(unsigned long long ptr)
{
	int counter;

	counter = 0;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	counter += ft_putstr("0x");
	counter += ft_puthex(ptr, "0123456789abcdef");
	return (counter);
}