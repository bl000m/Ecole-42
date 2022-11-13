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

int ft_single_word(char const *s, char c, int i)
{
  while (s[i] && s[i] != c)
    i++;
  return (i);
}

static void   ft_free(char **s, int size)
{
  while (size > 0)
  {
    free(s[size]);
    size--;
  }
  free(s);
}

char  **ft_split(char const *s, char c)
{
	char	        **result;
	int		i;
	int		j;
	int		nb_words;
  int    size;

	i = 0;
	j = 0;
  size = 0;
	nb_words = ft_words(s, c);
	result = malloc(sizeof(*result) * nb_words + 1);
	if (!result)
		return (NULL);
	while (i < nb_words)
	{
		while (s[j] == 'c')
			j++;
    size = ft_single_word(s, c, j);
    result[i] = ft_substr(s, j, size);
    if (!result[i])
    {
      ft_free(result, i);
      return (NULL);
    }
    j += size;
    i++;
	}
  result[i] = 0;
	return (result);
}
