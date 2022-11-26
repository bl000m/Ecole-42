/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:00:36 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/21 13:25:22 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	format_list(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' \
	|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (0);
	return (1);
}

static int	print_count(int c, int size)
{
	write(1, &c, 1);
	size++;
	return (size);
}

int	ft_check(va_list args, const char *format, int size)
{
	size_t	i;

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			size = print_count(format[i], size);
		else if (format[i] == '%' && format[i + 1] != '\0')
		{
			if (format_list(format[i + 1]) == 0)
			{
				size = ft_check_tag(args, format[i + 1], size);
				i++;
			}
		}
		else
			return (size);
		i++;
	}
	return (size);
}
