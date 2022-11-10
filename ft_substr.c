/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:03:40 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/10 13:44:00 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = malloc(sizeof(*new_str) * len + 1);
	if (!new_str)
		return (NULL);
	if ((size_t)start < len)
	{
		while (new_str[i] && i < len && s[start])
		{
			new_str[i] = s[start];
			i++;
			start++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
