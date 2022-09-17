/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:07:52 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/06 10:45:26 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	t;
	unsigned int	n;

	n = 0;
	i = 0;
	t = 0;
	while (src[n] != '\0')
	n++;
	while ((src[i] != '\0') && (i <= size))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
