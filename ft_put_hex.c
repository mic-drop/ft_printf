/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:34:33 by mserra-p          #+#    #+#             */
/*   Updated: 2024/12/11 14:37:36 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned long nb, char *hex)
{
	int		counter;
	char	c;

	counter = 0;
	if (nb >= 16)
	{
		counter += ft_puthex(nb / 16, hex);
	}
	c = hex[nb % 16];
	counter += ft_putchar(c);
	return (counter);
}
