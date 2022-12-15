/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:53:20 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/15 14:46:25 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_add_front(t_stack **stack, t_stack *new)
{
	if (stack == NULL)
		return ;
	if (*stack == NULL)
	{
		new->next = NULL;
		*stack = new;
		return ;
	}
	new->next = *stack;
	*stack = new;
}
