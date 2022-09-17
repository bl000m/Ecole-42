/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 10:12:31 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/16 13:19:21 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
/*
int	main(int argc, char **argv)
{
	ft_sort((argc -1), &argv[1]);
	ft_print((argc - 1), &argv[1]);
	return (0);
}

void	ft_sort(size, **str)
{
	int		i;
	int		t;
	char	*tab;

	i = 0;
	while (i < size)
	{
		t = i + 1;
		while (t < (size - 1))
		{
			if (ft_strcmp(*str[i], *str[t]) > 0)
			{
				tab = str[i];
				*str[i] = *str[t];
				*str[t] = tab;
			}	
			t++;
		}
		i++;
	}
	ft_print(size, *str);
}

void ft_print(size, **str)
{
	int	i;
	i = 0;
	while (i < size)
	{
		ft_putstr(*str[i]);
		ft_putchar('\n');
		i++;
	}
}
*/
int	main(int argc, char **argv)
{
	int		i;
	int 	t;
	char	*tab;	
	
	if (argc == 1)
		return (0);
	i = 0;
	while (i < (argc - 1))
	{
		t = i + 1;
		while (t < (argc))
		{
			if (ft_strcmp(argv[i], argv[t]) > 0)
			{
				tab = argv[i];
				argv[i] = argv[t];
				argv[t] = tab;
			}
			t++;
		}
		i++;
	}
	i = 1;
	while (i <= argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i]) && (s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
