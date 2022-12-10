/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_big.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:59:38 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 18:11:56 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_in_range(int x, int min, int max)
{
	return (x >= min && x <= max);
}

void	target_to_top(t_stack **stack, int index)
{
	if (stack_size(*stack) - index > stack_size(*stack) / 2)
	{
		while (index > 0)
		{
			r(stack);
			index--;
		}
	}
	if ((stack_size(*stack) - index) < stack_size(*stack) / 2)
	{
		while (index < stack_size(*stack))
		{
			rr(stack);
			index++;
		}
	}
}

int	find_index(t_stack **stack_a, int min, int max)
{
	int		index;
	t_stack	*runner;

	index = 0;
	runner = *stack_a;
	while (runner)
	{
		if (is_in_range(runner->nb, min, max))
        break ;
		index++;
		runner = runner->next;
	}
	if (index == stack_size(*stack_a))
		return (-1);
	return (index);
}

void	order_stack_b(t_stack **stack_b)
{
	int	index_min;

	if (!(*stack_b))
		return ;
	index_min = ft_min(*stack_b);
	target_to_top(stack_b, index_min);
}

void	target_to_stack_b(t_stack **stack_a, int min, int max, t_stack **stack_b)
{
	int		index;

	index = 0;
	while (index >= 0)
	{
		index = find_index(stack_a, min, max);
		if (index == -1)
			break ;
		target_to_top(stack_a, index);
		// order_stack_b(stack_b);
		p(stack_a, stack_b);
	}
}

// not working when is_in_range(nb, 0, 19) is at index 0 at the beginning
void	case_100(t_stack **stack_a)
{
	t_stack	*stack_b;
	stack_b = NULL;

	target_to_stack_b(stack_a, 0, 19, &stack_b);
	target_to_stack_b(stack_a, 20, 39, &stack_b);
	target_to_stack_b(stack_a, 40, 59, &stack_b);
	target_to_stack_b(stack_a, 60, 79, &stack_b);
	target_to_stack_b(stack_a, 80, 99, &stack_b);
	printf("start of list_b\n");
	display_list(stack_b);
	printf("end of list_b\n");
}
