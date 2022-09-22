/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:20:02 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/20 11:20:04 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_buf_size(char *path)
{
	int		fd;
	int		i;
	char	buf[1];

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (-1);
	}
	i = 1;
	while (read(fd, buf, 1) != 0)
		i++;
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (-1);
	}
	return (i);
}

char	*get_buffer(char *path)
{
	char	*buffer;
	int		size;
	int		fd;

	size = get_buf_size(path);
	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
		return (NULL);
	}
	buffer = (char *)malloc(sizeof(*buffer) * size);
	if (!buffer)
	{
		ft_putstr("malloc buffer failed\n");
		return (NULL);
	}
	read(fd, buffer, size);
	buffer[(size - 1)] = '\0';
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (NULL);
	}
	return (buffer);
}

t_elem	*get_map_info(char **array)
{
	t_elem	*map;
	int		size;
	char	rows_str[11];
	int		rows;
	int		z;

	map = malloc(sizeof(*map));
	if (!map)
		return (NULL);
	size = ft_strlen(array[0]);
	z = -1;
	while (++z < (size - 3))
		rows_str[z] = array[0][z];
	rows = ft_atoi(rows_str);
	map[0].rows = rows;
	map[0].empty = array[0][(size - 3)];
	map[0].obst = array[0][(size - 2)];
	map[0].full = array[0][(size - 1)];
	return (map);
}

int	**get_int_array(char **array, t_elem *map)
{
	int	**tab;
	int	index;
	int	i;

	tab = malloc(sizeof(int *) * map->rows);
	if (!tab)
		return (tab);
	index = 0;
	while (array[index])
	{
		i = 0;
		tab[index] = malloc(sizeof(int) * ft_strlen(array[index]));
		while (i < ft_strlen(array[index]))
		{
			if (array[index][i] == map->empty)
				tab[index][i] = 1;
			else if (array[index][i] == map->obst)
				tab[index][i] = 0;
			else
				tab[index][i] = -1;
			i++;
		}
		index++;
	}
	return (tab);
}
