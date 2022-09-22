/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:34:11 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/20 16:54:50 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	free_array(char **array)
{
	int	j;

	j = 0;
	while (array[j] != 0)
		free(array[j++]);
	free(array[j]);
	free(array);
	return (j);
}

void	ft_print(char **array)
{
	int	x;
	int	y;

	y = 0;
	while (array[y] != 0)
	{
		x = 0;
		while (x < ft_strlen(array[y]))
		{
			ft_putchar(array[y][x]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

char	**get_strs_array(char *path)
{
	char	*buffer;
	char	**array;
	int		j;

	j = 0;
	buffer = get_buffer(path);
	array = ft_split(buffer, "\n");
	free(buffer);
	if (is_map_error(array))
	{
		write(2, "map error\n", 10);
		j = free_array(array);
		return (NULL);
	}
	return (array);
}

void	find_and_show_solution(char *path)
{
	char	**array;
	int		**tab;
	int		j;
	t_elem	*map_info;
	t_posit	*highest_s;

	array = get_strs_array(path);
	if (!array)
		return ;
	map_info = get_map_info(array);
	j = 0;
	tab = get_int_array(&array[1], map_info);
	highest_s = ft_find_square(tab, map_info->rows, ft_strlen(array[1]));
	ft_draw_square(&array[1], highest_s, map_info);
	free(highest_s);
	free(map_info);
	ft_print(&array[1]);
	j = free_array(array) - 2;
	while (j >= 0)
		free(tab[j--]);
	free(tab);
}

int	main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
	{
		write(2, "map error\n", 10);
	}
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			find_and_show_solution(argv[i]);
			i++;
			if (i > 1 && i < argc)
				write(1, "\n", 1);
		}
	}
	return (0);
}
