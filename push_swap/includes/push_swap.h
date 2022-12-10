/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:01:31 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 13:15:01 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <stdio.h>

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}	t_stack;

void	push_swap(t_stack **stack_a);
void	s(t_stack **stack);
void	p(t_stack **from, t_stack **to);
void	r(t_stack **stack);
void	rr(t_stack **stack);
void	display_list(t_stack *head);
int		ft_min(t_stack *stack);
int		ft_max(t_stack *stack);
void	case_3(t_stack **stack_a);
void	case_5(t_stack **stack_a);
int		check_pos_4(int nb, t_stack **stack_a);
int		check_pos_5(int nb, t_stack **stack_a);
void	insert(int pos, t_stack **stack_a);
void	case_100(t_stack **stack_a);
void	refill(t_stack **stack_b, t_stack **stack_a);
int		stack_size(t_stack *stack);
void	stack_add_front(t_stack **stack, t_stack *new);
void	stack_add_back(t_stack **stack, t_stack *new);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_new(int nb);

#endif
