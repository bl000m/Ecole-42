/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:10:03 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/07 14:25:06 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_s;
	unsigned int	dest_s;

	src_s = 0;
	dest_s = 0;
	while (dest[dest_s] != '\0')
		dest_s++;
	while ((src[src_s] != '\0') && (src_s < nb))
	{
		dest[dest_s + src_s] = src[src_s];
		src_s++;
	}
	dest[dest_s + src_s] = '\0';
	return (dest);
}
