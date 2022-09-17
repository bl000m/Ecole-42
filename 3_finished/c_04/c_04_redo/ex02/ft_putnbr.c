/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:51:23 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/10 12:45:48 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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
		ft_putchar(nb_un + '0');
}
