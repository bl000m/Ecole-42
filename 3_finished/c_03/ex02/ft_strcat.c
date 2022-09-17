/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:35:08 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/08 10:56:14 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		src_s;
	int		dest_s;

	src_s = 0;
	dest_s = 0;
	while (dest[dest_s] != '\0')
		dest_s++;
	while (src[src_s] != '\0')
	{
		dest[dest_s + src_s] = src[src_s];
		src_s++;
	}
	dest[dest_s + src_s] = '\0';
	return (dest);
}
