/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:07:24 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/20 14:47:22 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		size;

	size = 0;
	if (!format)
		return (0);
	if (write(1, 0, 0) != 0)
		return (-1);
	va_start(args, format);
	size = ft_check(args, format, size);
	va_end(args);
	return (size);
}
