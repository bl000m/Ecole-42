/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:48:23 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/10 10:28:08 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	size;
	char	*ptr_s;

	ptr_s = (char *)s;
	i = 0;
	while (i < n)
		i++;
	size = i;
	i = 0;
	while (ptr_s[i])
	{
		if (ptr_s[i] == c)
			break ;
		i++;
	}
	if (i == n)
		return (NULL);
	return (&ptr_s[i]);
}
