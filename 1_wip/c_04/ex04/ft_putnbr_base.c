/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:56:46 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/18 13:21:17 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *str);
void	ft_putchar(char c);
int		ft_strlen(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;
	int			size_b;

	n = nbr;
	size_b = ft_strlen(base);
	if (ft_check(base))
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n < size_b)
			ft_putchar(base[n]);
		if (n >= size_b)
		{
			ft_putnbr_base(n / size_b, base);
			ft_putnbr_base(n % size_b, base);
		}
	}
}

int	ft_check(char *str)
{
	int	i;
	int	t;

	i = 0;
	t = 1;
	if (ft_strlen(str) < 2)
		return (0);
	while (i < (ft_strlen(str) - 1))
	{
		if ((str[i] == '+') || (str[i] == '-'))
			return (0);
		while (str[t])
		{
			if (str[i] == str[t])
				return (0);
			t++;
		}
		i++;
		t = i + 1;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
