/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mserra-p <mserra-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:35:21 by mserra-p          #+#    #+#             */
/*   Updated: 2024/12/11 14:39:40 by mserra-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	counter;

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
