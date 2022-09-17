/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:15:22 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/14 17:19:51 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = (max - min);
	tab = malloc(sizeof(*tab) * (size));
	if (max <= min)
		return (NULL);
	if (size < 0)
		size = (size * -1);
	while (i < size)
	{
		tab[i++] = min++;
	}
	return (tab);
}
