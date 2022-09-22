/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:34:03 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/20 16:17:31 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_posit	*ft_find_square(int **tab, int rows, int col)
{
	int		x;
	int		y;
	t_posit	*posit;

	x = 1;
	y = 1;
	while (y < rows)
	{
		x = 1;
		while (x < col)
		{
			if (tab[y][x] > 0)
				tab[y][x] = ft_min(tab[y - 1][x], tab[y - 1][x - 1],
						tab[y][x - 1]);
			x++;
		}
		y++;
	}
	posit = ft_check_tab(tab, rows, col);
	return (posit);
}

t_posit	*ft_check_tab(int **tab, int rows, int col)
{
	int		x;
	int		y;
	int		highest_sc;
	t_posit	*posit;

	y = 0;
	posit = malloc(sizeof(*posit));
	if (!posit)
		return (NULL);
	highest_sc = tab[0][0];
	while (++y < rows)
	{
		x = 0;
		while (++x < col)
		{
			if (tab[y][x] > highest_sc)
			{
				highest_sc = tab[y][x];
				posit->y = y;
				posit->x = x;
				posit->max = highest_sc;
			}
		}
	}
	return (posit);
}

int	ft_min(int a, int b, int c)
{
	int	min;

	min = a;
	if (b < min)
		min = b;
	if (c < min)
		min = c;
	return (min + 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
