/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:01:31 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/09 10:51:29 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
// testing libraries
# include <stdio.h>

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}	t_stack;

void	push_swap(t_stack **stack_a);
void	s(t_stack **stack);
void	ss(t_stack **a, t_stack **b);
void	p(t_stack **from, t_stack **to);
void	r(t_stack **stack);
void	rr(t_stack **a, t_stack **b);
void	rot_r(t_stack **stack);
void	rot_rr(t_stack **a, t_stack **b);
void	display_list(t_stack *head);
int		ft_min(t_stack *stack);
int		ft_max(t_stack *stack);
void	case_3(t_stack **stack_a);
void	case_5(t_stack **stack_a);
int		check_pos_4(int nb, t_stack **stack_a);
int		check_pos_5(int nb, t_stack **stack_a);
void	insert(int pos, t_stack **stack_a);

#endif
