/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:06:20 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/15 16:46:34 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "ft_stock_str.h" 

void ft_show_tab(struct s_stock_str *par)
{
	int ph_size;
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (par[i]->str != '\0')
		par[i++];
	size = i

	while (t <= i)
	{
		ft_putstr(par[i]);
		ft_putchar('\n');
		ft_putnbr(par[i]->size);
		ft_putchar('\n');
		ft_putstr(par[i]->copy);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unisigned int	nb_un;

	nb_un = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb_un = -nb;
	}
	if (nb_un >= 10)
	{
		ft_putnbr(nb_un / 10);
		ft_putnbr(nb_un % 10);
	}	
	else
		ft_putchar(nb_un + '0');
}

