#include "libftprintf.h"

void	ft_putstr(char *s)
{
	int i;

	if (s == NULL)
	{
		ft_putstr("(null)");
		return;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}