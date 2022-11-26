/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:02:42 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/21 09:29:02 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_check_tag(va_list args, char c, int size)
{
	if (c == 'c')
		size = ft_output_c(va_arg(args, int), size);
	if (c == 's')
		size = ft_output_s(va_arg(args, char *), size);
	if (c == 'p')
		size = ft_output_p(args, size);
	if (c == 'd' || c == 'i')
		size = ft_output_d(args, size);
	if (c == 'u')
		size = ft_output_u(args, size);
	if (c == 'x')
		size = ft_output_x(args, size);
	if (c == 'X')
		size = ft_output_xmaj(args, size);
	if (c == '%')
		size = ft_output_perc(size);
	return (size);
}
