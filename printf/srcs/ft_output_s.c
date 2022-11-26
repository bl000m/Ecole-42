/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:13:56 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/21 16:03:47 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_output_s(char *s, int size)
{
	int		i;

	i = 0;
	if (!s)
		s = "(null)";
	size += ft_strlen(s);
	while (s[i])
		write(1, &s[i++], 1);
	return (size);
}
