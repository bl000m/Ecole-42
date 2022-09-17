/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:12:25 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/14 17:22:35 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	size = (max - min);
	tab = malloc(sizeof(*tab) * (size));
	if (!(tab))
		return (-1);
	if (size < 0)
		size = (size * -1);
	while (i < size)
		tab[i++] = min++;
	*range = tab;
	return (i);
}
