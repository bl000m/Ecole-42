/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_big.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 09:59:38 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/11 11:33:48 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_in_range(int x, int min, int max)
{
	return (x >= min && x <= max);
}

void	target_to_top(t_stack **stack, int index)
{
	if ((stack_size(*stack) - index) >= (stack_size(*stack) / 2))
	{
		while (index >= 0)
		{
			r(stack);
			index--;
		}
	}
	if ((stack_size(*stack) - index) < (stack_size(*stack) / 2))
	{
		while (index < stack_size(*stack))
		{
			rr(stack);
			index++;
		}
	}
}

int	find_top_index(t_stack **stack_a, int min, int max)
{
	int		top_index;
	int		index;
	t_stack	*runner;

	index = 0;
	top_index = 0;
	runner = *stack_a;
	while (runner)
	{
		if (is_in_range(runner->nb, min, max))
		{
			top_index = index;
			break ;
		}
		index++;
		runner = runner->next;
	}
	return (top_index);
}

int	find_bottom_index(t_stack **stack_a, int min, int max)
{
	int		bottom_index;
	int		index;
	t_stack	*runner;

	index = 0;
	bottom_index = 0;
	runner = *stack_a;
	while (runner)
	{
		if (is_in_range(runner->nb, min, max))
			bottom_index = index;
		index++;
		runner = runner->next;
	}
	return (bottom_index);
}

int	find_index(t_stack **stack_a, int min, int max)
{
	int		index;
	int		bottom_index;
	int		top_index;

	index = 0;
	bottom_index = find_bottom_index(stack_a, min, max);
	top_index = find_top_index(stack_a, min, max);
	if (top_index <= (stack_size(*stack_a) - bottom_index))
		index = top_index;
	else
		index = bottom_index;
	// ft_printf("top_index = %i\n", top_index);
	// ft_printf("bottom_index = %i\n", bottom_index);
	if (top_index == 0 && bottom_index == 0)
		return (-1);
	return (index);
}

int	find_closest(t_stack *stack_b, int n)
{
	int	delta;
	int	index;
	int	index_closest_up;

	index = 0;
	delta = stack_b->nb - n;
	while (stack_b)
	{
		if (stack_b->nb - n < delta)
		{
			delta =stack_b->nb - n;
			index_closest_up = index;
		}
		index++;
		stack_b = stack_b->next;
	}
	return (index_closest_up);
}

void	order_and_push(t_stack **stack_b, t_stack **stack_a)
{
	int	index_min;
	int	index_max;
	int	index_closest_up;

	if (!(*stack_b))
		return ;
	index_min = ft_min(*stack_b);
	index_max = ft_max(*stack_b);
	index_closest_up = 0;
	ft_printf("index_min = %i\n", index_min);
	ft_printf("index_max = %i\n", index_max);
	ft_printf("(*stack_a)->nb = %i\n", (*stack_a)->nb);
	if ((*stack_a)->nb < index_min)
	{
		ft_printf("coucou\n");
		p(stack_a, stack_b);
		r(stack_b);
	}
	if ((*stack_a)->nb > index_min && (*stack_a)->nb < index_max)
	{
		p(stack_a, stack_b);
		index_closest_up = find_closest(*stack_b, (*stack_b)->nb);
		ft_printf("index_closest_up = %i\n", index_closest_up);
		target_to_top(stack_b, index_closest_up);
		ft_printf("stack_b->nb before p = %i\n", (*stack_b)->nb);
		p(stack_a, stack_b);
		ft_printf("stack_b->nb after p = %i\n", (*stack_b)->nb);
		s(stack_b);
	}
}

void	target_to_stack_b(t_stack **stack_a, int min, int max, t_stack **stack_b)
{
	int		index;

	index = 0;
	while (index >= 0)
	{
		index = find_index(stack_a, min, max);
		ft_printf("index = %i\n", index);
		if (index == -1)
			break ;
		target_to_top(stack_a, index);
		order_and_push(stack_b, stack_a);
		p(stack_a, stack_b);
		ft_printf("start of list_b\n");
		display_list(*stack_b);
		ft_printf("end of list_b\n");
	}
}

// not working when is_in_range(nb, 0, 19) is at index 0 at the beginning
void	case_100(t_stack **stack_a)
{
	t_stack	*stack_b;
	stack_b = NULL;

	target_to_stack_b(stack_a, 0, 19, &stack_b);
	// target_to_stack_b(stack_a, 20, 39, &stack_b);
	// target_to_stack_b(stack_a, 40, 59, &stack_b);
	// target_to_stack_b(stack_a, 60, 79, &stack_b);
	// target_to_stack_b(stack_a, 80, 99, &stack_b);
	ft_printf("start of list_b\n");
	display_list(stack_b);
	ft_printf("end of list_b\n");
}
