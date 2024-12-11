/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:34:17 by mserra-p          #+#    #+#             */
/*   Updated: 2024/12/11 14:54:16 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	handle_percentage_exception(char *str_copy)
{
	ft_putchar('%');
	ft_putchar(*str_copy);
	return (2);
}

static int	ft_handle_conversions(char **str_copy, va_list args)
{
	int	char_counter;

	char_counter = 0;
	if (*str_copy == 'i' || *str_copy == 'd')
		char_counter += ft_putnbr(va_arg(args, int));
	if (*str_copy == 'u')
		char_counter += ft_putnbr(va_arg(args, unsigned int));
	if (*str_copy == 'c')
		char_counter += ft_putchar(va_arg(args, char));
	if (*str_copy == 's')
		char_counter += ft_putstr(va_arg(args, char *));
	if (*str_copy == 'x')
		char_counter += ft_puthex(va_arg(args, unsigned int),
				"0123456789abcdef");
	if (*str_copy == 'X')
		char_counter += ft_puthex(va_arg(args, unsigned int),
				"0123456789ABCDEF");
	if (*str_copy == 'p')
		char_counter += ft_putptr(va_arg(args, unsigned long long));
	if (*str_copy == '%')
		char_counter += ft_putchar('%');
	else
		char_counter += handle_percentage_exception(*str_copy);
	return (char_counter);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*str_copy;
	int		char_counter;

	va_start(args, str);
	str_copy = (char *)str;
	char_counter = 0;
	while (*str_copy)
	{
		if (*str_copy == '%' && *(str_copy + 1))
		{
			str_copy++;
			char_counter += ft_handle_conversions(*str_copy, args);
		}
		else
		{
			char_counter += ft_putchar(*str_copy);
		}
		str_copy++;
	}
	va_end(args);
	return (char_counter);
}
