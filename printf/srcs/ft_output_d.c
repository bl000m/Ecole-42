/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:23:55 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/20 14:46:50 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_output_d(va_list args, int size)
{
	int	res;

	res = va_arg(args, int);
	ft_putnbr(res);
	if (res == 0)
		size++;
	if (res < 0)
		size++;
	while (res != 0)
	{
		res /= 10;
		size ++;
	}
	return (size);
}
