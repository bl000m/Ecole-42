/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:23:24 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/16 13:39:03 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int	i;
	t_stock_str *phrase;

	i = 0;
	phrase = NULL;
	phrase = malloc(sizeof(*phrase) * (ac + 1));
	if (!phrase)
		return (phrase);
	while (i < ac)
	{
		phrase[i].size = ft_strlen(av[i]);
		phrase[i].str = av[i];
		phrase[i].copy = ft_strdup(av[i]);
		i++;
	}
	phrase[i].str = 0; 
	phrase[i].size = 0; 
	phrase[i].copy = 0; 

	return (phrase);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(*str) * ft_strlen(src) + 1);
	if (!(str))
		return (NULL);
	while (*src)
		str[i++] = *src++;
	str[i] = '\0';
	return (str);
}
