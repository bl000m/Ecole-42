/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcoissar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:42:59 by lcoissar          #+#    #+#             */
/*   Updated: 2022/09/19 17:43:01 by lcoissar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*ft_strndup(char *str, int n)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	if (i > n)
		i = n;
	dest = malloc(i + 1);
	if (!dest)
		return (dest);
	while (j < i)
	{
		dest[j] = str[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
