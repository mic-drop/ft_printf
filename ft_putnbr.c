/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:35:05 by mserra-p          #+#    #+#             */
/*   Updated: 2024/12/11 14:39:07 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(long nb)
{
	char	c;
	int		counter;

	counter = 0;
	if (nb < 0)
	{
		counter += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		counter += ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	counter += ft_putchar(c);
	return (counter);
}
