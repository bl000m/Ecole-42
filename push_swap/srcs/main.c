/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:28:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 12:42:02 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	display_list(t_stack *head);
t_stack	*create_stack_a(int argc, char *argv[]);
int		check_error(t_stack *stack);

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
		return (0);
	stack_a = create_stack_a(argc, argv);
	if (check_error(stack_a))
		return (0);
	push_swap(&stack_a);
	display_list(stack_a);
}

// verify where to add || runner_2->nb > INT_MAX
// verify stack_size = 0 || 1
int	check_error(t_stack *stack)
{
	t_stack	*runner_1;
	t_stack	*runner_2;

	runner_1 = stack;
	runner_2 = runner_1->next;
	if (stack_size(stack) == 1)
		return (0);
	while (runner_1->next != NULL)
	{
		while (runner_2 != NULL)
		{
			if (runner_1->nb == runner_2->nb)
			{
				printf("error\n");
				return (1);
			}
			runner_2 = runner_2->next;
		}
		runner_1 = runner_1->next;
		runner_2 = runner_1->next;
	}
	return (0);
}

t_stack	*create_stack_a(int argc, char *argv[])
{
	t_stack	*head;
	t_stack	*temp;
	int		i;

	i = 1;
	head = NULL;
	while (i < argc)
	{
		temp = malloc(sizeof(temp));
		if (!temp)
			return (NULL);
		temp->nb = ft_atoi(argv[i++]);
		temp->next = NULL;
		if (!head)
			head = temp;
		else
			stack_add_back(&head, temp);
	}
	return (head);
}
