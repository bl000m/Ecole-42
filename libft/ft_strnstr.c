/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:27:15 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/10 10:13:49 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	size;
	char	*dest;

	dest = (char *)haystack;
	i = 0;
	size = ft_strlen(needle);
	if (size == 0)
		return (dest);
	while ((i + size) <= len)
	{
		if (dest[i] == needle[0])
		{
			if (ft_strncmp(&dest[i], &needle[0], size) == 0)
				return (&dest[i]);
		}
		i++;
	}
	return (NULL);
}
