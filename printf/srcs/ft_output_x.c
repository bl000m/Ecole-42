/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:01:13 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/20 14:47:13 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_output_x(va_list args, int size)
{
	unsigned int	res;

	res = va_arg(args, unsigned int);
	size += ft_putnbr_base(res, 16, "0123456789abcdef");
	return (size);
}
