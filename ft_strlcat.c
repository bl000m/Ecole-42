/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:40:02 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/10 10:38:29 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	src_s;
	size_t	dest_s;
	size_t	i;

	dest_s = ft_strlen(dest);
	src_s = ft_strlen(src);
	i = 0;
	if (dest_s < size)
	{
		while ((src[i] != '\0') && ((dest_s + i) < (size - 1)))
		{
			dest[dest_s + i] = src[i];
			i++;
		}
		dest[dest_s + i] = '\0';
		return (src_s + dest_s);
	}
	return (src_s + size);
}
