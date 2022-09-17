/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:11:01 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/03 16:17:43 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	val_3;

	val_3 = *a;
	*a = *b;
	*b = val_3;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	*cas_1;
	int	*cas_2;

	n = 0;
	while (n < size / 2)
	{
		cas_1 = tab + n;
		cas_2 = tab + size - 1 - n;
		ft_swap(cas_1, cas_2);
		n ++;
	}
}
