/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:01:31 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/16 17:21:50 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}	t_stack;

t_stack	*create_stack(int argc, char *argv[]);
int		check_duplicate(t_stack *stack);
int		check_input(char **argv);
void	stack_free(t_stack **stack);
void	array_free(char **result, int max);
void	int_array_free(int **result);
int		already_ordered(t_stack **stack);
size_t	arr_len(char **str);
void	exit_error(void);
int		is_overflow(char *argv);
int		is_sign(char c);
int		is_number(char *argv);
int		is_zero(char *argv);
int		spaces(char *c);
void	push_swap(t_stack **stack_a);
void	case_3(t_stack **stack_a);
void	case_5(t_stack **stack_a);
void	case_100(t_stack **stack_a);
void	case_500(t_stack **stack_a);
void	s(t_stack **stack, char choice);
void	p(t_stack **from, t_stack **to, char choice);
void	r(t_stack **stack, char choice);
void	rr(t_stack **stack, char choice);
int		ft_min(t_stack *stack);
int		ft_max(t_stack *stack);
int		ft_max_value(t_stack *stack);
int		ft_min_value(t_stack *stack);
void	replace_by_index(t_stack **stack);
int		stack_size(t_stack *stack);
void	stack_add_front(t_stack **stack, t_stack *new);
void	stack_add_back(t_stack **stack, t_stack *new);
t_stack	*stack_last(t_stack *stack);
t_stack	*stack_new(int nb);
void	target_to_top(t_stack **stack, int index, char choice);
void	target_to_b(t_stack **stack_a, int min, int max, t_stack **stack_b);
void	order_stack_b(t_stack **stack_b);
void	highest_to_a(t_stack **stack_b, t_stack **stack_a);
void	back_to_a(t_stack **stack_b, t_stack **stack_a, int count);
int		is_in_range(int x, int min, int max);
int		find_top_index(t_stack **stack_a, int min, int max);
int		find_bottom_index(t_stack **stack_a, int min, int max);
int		find_index(t_stack **stack_a, int min, int max);
int		ft_min_range(t_stack *stack, int min_range);

#endif
