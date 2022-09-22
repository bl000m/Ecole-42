/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:54:34 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/20 16:54:37 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_is_allowed_array(char **array, char a, char b)
{
	int	index;
	int	i;
	int	size;

	size = ft_strlen(array[0]);
	index = 0;
	if (array[0][(size - 2)] == array[0][(size - 3)]
		|| array[0][(size - 2)] == array[0][(size - 1)]
		|| array[0][(size - 1)] == array[0][(size - 2)])
	{
		return (0);
	}
	while (array[index] != 0)
	{
		i = 0;
		while (array[index][i])
		{
			if (array[index][i] != a && array[index][i] != b)
				return (0);
			i++;
		}
		index++;
	}
	return (1);
}

int	is_map_error(char **array)
{
	int		j;
	int		z;
	int		size;
	char	rows_str[11];

	j = 0;
	while (array[j] != 0)
		j++;
	j--;
	size = ft_strlen(array[0]);
	if (j < 1 || size < 4 || size > 12)
		return (1);
	z = -1;
	while (++z < (size - 3))
		rows_str[z] = array[0][z];
	rows_str[z] = '\0';
	if (j != ft_atoi(rows_str) || !ft_is_allowed_array(&array[1],
			array[0][(size - 3)], array[0][(size - 2)]))
		return (1);
	z = ft_strlen(array[j--]);
	while (j > 0)
		if (z != ft_strlen(array[j--]))
			return (1);
	return (0);
}
