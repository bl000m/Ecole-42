/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:28:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/15 15:12:05 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



void	ft_free_all(char **result, int max)
{
	int	i;

	i = 0;
	while (i < max)
		free(result[i++]);
	free(result);
	return ;
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		n_arg;
	int		i;
	int		is_free;

	i = 1;
	n_arg = 0;
	is_free = 0;
	if (spaces(argv[i]))
	{
		argv = ft_split(argv[i], ' ');
		argc = arr_len(argv);
		is_free = 1;
	}
	else
	{
		argv++;
		argc--;
	}
	if (argc <= 2)
		return (0);
	if (!check_input(argv))
		exit_error();
	stack_a = create_stack(argc, argv);
	if (is_free)
		ft_free_all(argv, argc);
	if (!check_duplicate(stack_a))
		exit_error();
	push_swap(&stack_a);
}

t_stack	*create_stack(int argc, char *argv[])
{
	t_stack	*stack;
	int		i;

	i = 0;
	stack = NULL;
	while (i < argc)
	{
		stack_add_back(&stack, stack_new(ft_atoi(argv[i])));
		i++;
	}
	return (stack);
}
