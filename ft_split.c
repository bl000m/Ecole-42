/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:52:20 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/10 18:40:19 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	delim;

	i = 0;
	delim = 0;
	while (i < ft_strlen(s) - 1)
	{
		if (s[i] == c && s[i + 1] != c && s[i - 1] != c)
			delim++;
		i++;
	}
	return (delim + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	unsigned int		i;
	unsigned int		j;
	unsigned int		t;
	unsigned int		nb_words;

	i = 0;
	j = 0;
	t = 0;
	nb_words = ft_words(s, c);
	result = malloc(sizeof(*result) * nb_words + 1);
	if (!result)
		return (NULL);
	while (i < nb_words)
	{
		while (s[j] != 'c')
		{
			if (i == 0 && s[j] == c)
			{
				result[i] = malloc(sizeof(char) * j + 1);
				ft_strlcpy(result[i++], (char *)&s[t], j + 1);
				t = j;
			}
			if (i > 0 && s[j] == c)
				ft_strlcpy(result[i], (char *)&s[t], j);
			j++;
		}
		i++;
	}
	return (result);
}
