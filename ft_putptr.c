/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:35:50 by mserra-p          #+#    #+#             */
/*   Updated: 2024/12/11 14:39:17 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	counter;

	counter = 0;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	counter += ft_putstr("0x");
	counter += ft_puthex(ptr, "0123456789abcdef");
	return (counter);
}
