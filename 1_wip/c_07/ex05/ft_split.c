/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:23:12 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/21 12:23:16 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		while (!is_sep(str[i], charset))
			i++;
		count++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;
	int		j;
	int		index;

	index = 0;
	array = malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!array)
		return (array);
	i = 0;
	while (str[i])
	{
		while (is_sep(str[i], charset))
			i++;
		if (str[i] == '\0')
			break ;
		j = i;
		while (!is_sep(str[i], charset) && str[i] != '\0')
			i++;
		array[index++] = ft_strndup(&str[j], (i - j));
	}
	array[count_word(str, charset)] = 0;
	return (array);
}
