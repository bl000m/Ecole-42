/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:05:11 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 18:04:40 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_min(t_stack *stack)
{
	int	min;
	int	index;
	int	smallest_index;

	min = stack->nb;
	index = 0;
	while (stack)
	{
		if (stack->nb < min)
		{
			min = stack->nb;
			smallest_index = index;
		}
		index++;
		stack = stack->next;
	}
	return (smallest_index);
}
