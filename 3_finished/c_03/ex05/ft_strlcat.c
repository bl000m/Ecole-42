/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 11:44:55 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/08 13:01:38 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_size(char *word)
{
	unsigned int	i;

	i = 0;
	while (word[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_s;
	unsigned int	dest_s;
	unsigned int	i;

	dest_s = ft_size(dest);
	src_s = ft_size(src);
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
