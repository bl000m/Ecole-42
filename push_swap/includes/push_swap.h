/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:01:31 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/04 14:11:33 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
// testing libraries
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

void	push_swap(t_stack *stack_a);
void	s(t_stack **stack);
void	ss(t_stack **a, t_stack **b);
void	p(t_stack *a, t_stack *b);
void	r(t_stack **stack);
void	rr(t_stack **a, t_stack **b);
void	rot_r(t_stack stack);
void	rot_rr(t_stack **a, t_stack **b);

#endif
