/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_square.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:03:50 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/20 16:31:23 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_draw_square(char **array, t_posit *highest_s, t_elem *map_info)
{
	int	x;
	int	y;

	y = highest_s->y - highest_s->max;
	while (y <= highest_s->y)
	{
		x = highest_s->x - highest_s->max;
		while (x <= highest_s->x)
		{
			array[y][x] = map_info->full;
			x++;
		}
		y++;
	}
}
