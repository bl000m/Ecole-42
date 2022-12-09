/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 09:05:11 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/08 13:52:58 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_min(t_stack *stack)
{
	int	min;

	min = stack->nb;
	while (stack)
	{
		if (stack->nb < min)
			min = stack->nb;
		stack = stack->next;
	}
	return (min);
}

int	ft_max(t_stack *stack)
{
	int	max;

	max = stack->nb;
	while (stack)
	{
		if (stack->nb > max)
			max = stack->nb;
		stack = stack->next;
	}
	return (max);
}
