#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);
	char *str_copy;

	str_copy = (char *)str;
	while (*str_copy)
	{
		if (*str_copy == '%' && *(str_copy + 1))
		{
			str_copy++;
			if (*str_copy == 'i' || *str_copy == 'd')
				ft_putnbr(va_arg(args, int));
			if(*str_copy == 'u')
				ft_putnbr(va_arg(args,unsigned int));
			if (*str_copy == 's')
				ft_putstr(va_arg(args, char *));
			if (*str_copy == 'x')
				ft_puthex(va_arg(args, unsigned int));
		}
		else
		{
			ft_putchar(*str_copy);
		}
		str_copy++;
	}
	va_end(args);
	return (0);
}