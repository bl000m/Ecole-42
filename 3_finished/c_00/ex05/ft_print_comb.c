/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:57:42 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/03 08:34:43 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char a, char b, char c)
{
	char	vir;
	char	esp;

	vir = ',';
	esp = ' ';
	if (a == '7')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
	}
	else
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		write(1, &vir, 1);
		write(1, &esp, 1);
	}
}

void	ft_print_comb(void)
{
	char	n_1;
	char	n_2;
	char	n_3;

	n_1 = '0';
	n_2 = '1';
	n_3 = '2';
	while (n_1 <= '7')
	{
		while (n_2 <= '8')
		{
			while (n_3 <= '9')
			{
				ft_display(n_1, n_2, n_3);
				n_3 ++;
			}	
			n_2 ++;
			n_3 = n_2 + 1;
		}
		n_1 ++;
		n_2 = n_1 + 1;
		n_3 = n_2 + 1;
	}
}
