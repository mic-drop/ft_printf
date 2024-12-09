#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int i;
	int counter;

	counter = 0;
	if (s == NULL)
	{
		counter += ft_putstr("(null)");
		return (counter);
	}
	i = 0;
	while (s[i])
	{
		counter += ft_putchar(s[i]);
		i++;
	}
	return (counter);
}