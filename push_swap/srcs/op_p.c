/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:12:08 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 11:34:43 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	take the first node of a and set it as the first in b that means:
	=> point the head of b to first node in a
	=> a->next = b.first
	=> *a = a->next
	=> *b = a->next
*/

void	p(t_stack **from, t_stack **to)
{
	t_stack	*ptr;
	t_stack	*top;

	top = *from;
	ptr = (*from)->next;
	if (!(*to))
	{
		*to = stack_new(top->nb);
	}
	else
		stack_add_front(to, top);
	*from = ptr;
}
