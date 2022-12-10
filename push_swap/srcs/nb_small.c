/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_small.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:43:24 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 12:51:31 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	case_3(t_stack **stack_a)
{
	t_stack	*top;
	t_stack	*middle;
	t_stack	*bottom;

	top = *stack_a;
	middle = top->next;
	bottom = middle->next;
	if (top->nb > middle->nb && top->nb < bottom->nb && middle->nb < bottom->nb)
		s(stack_a);
	if (top->nb > middle->nb && top->nb > bottom->nb && middle->nb < bottom->nb)
		r(stack_a);
	if (top->nb > middle->nb && top->nb > bottom->nb && middle->nb > bottom->nb)
		s(stack_a);
	if (top->nb < middle->nb && top->nb > bottom->nb && middle->nb > bottom->nb)
		rr(stack_a);
	if (top->nb < middle->nb && top->nb < bottom->nb && middle->nb > bottom->nb)
	{
		s(stack_a);
		r(stack_a);
	}
}

void	case_5(t_stack **stack_a)
{
	t_stack	*runner;
	t_stack	*stack_b;

	stack_b = NULL;
	runner = *stack_a;
	while (runner && stack_size(*stack_a) > 3)
	{
		p(stack_a, &stack_b);
		runner = runner->next;
	}
	case_3(stack_a);
	while (stack_size(stack_b) > 0)
		refill(&stack_b, stack_a);
}

void	refill(t_stack **stack_b, t_stack **stack_a)
{
	int	pos;

	pos = 0;
	if (stack_size(*stack_a) == 3)
		pos = check_pos_4((*stack_b)->nb, stack_a);
	if (stack_size(*stack_a) == 4)
		pos = check_pos_5((*stack_b)->nb, stack_a);
	p(stack_b, stack_a);
	insert(pos, stack_a);
}

void	insert(int pos, t_stack **stack_a)
{
	if (pos == 2)
		s(stack_a);
	if (pos == 3)
	{
		rr(stack_a);
		s(stack_a);
		r(stack_a);
		r(stack_a);
	}
	if (pos == 4 || pos == 5)
		r(stack_a);
}
