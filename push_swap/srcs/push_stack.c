/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:12:08 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/04 15:56:11 by mpagani          ###   ########lyon.fr   */
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

void	p(t_stack *a, t_stack *b)
{
	t_stack	*ptr;

	ptr = a->next;
	ft_lstadd_front(b, a);
	a = ptr;
}
