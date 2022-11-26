/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:46:54 by mpagani           #+#    #+#             */
/*   Updated: 2022/11/20 14:47:31 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nb_un;

	nb_un = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb_un = nb * -1;
	}
	if (nb_un >= 10)
	{
		ft_putnbr(nb_un / 10);
		ft_putnbr(nb_un % 10);
	}
	else
	{
		ft_putchar(nb_un + '0');
	}
}
