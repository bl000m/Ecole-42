/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:28:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/04 15:20:28 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	display_list(t_stack *head);
t_stack	*create_stack_a(int argc, char *argv[]);

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
		return (0);
	stack_a = create_stack_a(argc, argv);
	display_list(stack_a);
}

t_stack	*create_stack_a(int argc, char *argv[])
{
	t_stack	*head;
	t_stack	*temp;
	int		i;

	i = 1;
	while (i < argc)
	{
		temp = malloc(sizeof(temp));
		if (!temp)
			return (NULL);
		temp->content = ft_atoi(argv[i++]);
		temp->next = NULL;
		if (!head)
			head = temp;
		else
		{
			temp->next = head;
			head = temp;
		}
	}
	return (head);
}

void	display_list(t_stack *head)
{
	t_stack	*ptr;

	ptr = head;
	while (ptr->next != NULL)
	{
		printf("%d\n", ptr->content);
		ptr = ptr->next;
	}
}

// int	main(void)
// {
// 	t_stack	*head;

// 	head = NULL;
// 	head = createlinkedlist(3);
// 	display_list(head);
// }
