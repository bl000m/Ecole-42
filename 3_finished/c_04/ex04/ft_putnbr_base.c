/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:56:46 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/14 15:30:32 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_base(int nbr, char *base)
{
	
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str)
		write(1, str[i], 1);
		i++;
}
