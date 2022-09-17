/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:52:16 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/16 10:15:22 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		malloc_size(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
// versione mia che non compila
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*output;
	int		i;

	i = 0;
	output = malloc(sizeof(*output) * malloc_size(size, strs, sep));
	output[0] = '\0';
	if (size == 0)
		return (output);
	while (i < size)
	{
		ft_strcat(output, strs[i]);
		if (i != (size - 1))
			ft_strcat(output, sep);
		i++;
	}
	output[ft_strlen(output)] = 0;
	return (output);
}	

int	malloc_size(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	if (size == 0)
		return (1);
	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += ft_strlen(sep);
		i++;
	}
	if (size >= 1)
		len -= ft_strlen(sep);
	return (len + 1);
}

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

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

int main(int argc, char **argv)
{
	char *dest;

	dest = ft_strjoin(argc - 1, &argv[1], " | ");
	printf("%s\n", dest);
	return (0);
}
