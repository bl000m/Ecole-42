/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:28:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/16 17:18:47 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		is_free;

	is_free = 0;
	if (spaces(argv[1]))
	{
		argv = ft_split(argv[1], ' ');
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
		array_free(argv, argc);
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
