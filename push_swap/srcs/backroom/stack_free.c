/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:24:50 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/15 14:47:13 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_free(t_stack **stack)
{
	t_stack	*ptr;

	while (*stack)
	{
		//printf("free %p - %d\n", *stack, (*stack)->nb);
		ptr = (*stack)->next;
		free(*stack);
		*stack = ptr;
	}
}
