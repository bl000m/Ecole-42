/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:03:14 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 10:09:16 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_pos_4(int nb, t_stack **stack_a)
{
	int	pos;

	pos = 0;
	if (nb < (*stack_a)->nb)
		pos = 1;
	if (nb > (*stack_a)->nb && nb < (*stack_a)->next->nb)
		pos = 2;
	if (nb > (*stack_a)->next->nb && nb < (*stack_a)->next->next->nb)
		pos = 3;
	if (nb > (*stack_a)->next->next->nb)
		pos = 4;
	return (pos);
}

int	check_pos_5(int nb, t_stack **stack_a)
{
	int	pos;

	pos = 0;
	if (nb < (*stack_a)->nb)
		pos = 1;
	if (nb > (*stack_a)->nb && nb < (*stack_a)->next->nb)
		pos = 2;
	if (nb > (*stack_a)->next->nb && nb < (*stack_a)->next->next->nb)
		pos = 3;
	if (nb > (*stack_a)->next->next->nb)
		pos = 4;
	if (nb > (*stack_a)->next->next->next->nb)
		pos = 5;
	return (pos);
}
