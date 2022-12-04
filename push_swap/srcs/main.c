/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:28:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/04 16:55:36 by mpagani          ###   ########lyon.fr   */
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
	display_list(stack_a);
}

// to be checked again why not working and verify where to add
// || runner_2->content > INT_MAX
int	check_error(t_stack *stack)
{
	t_stack	*runner_1;
	t_stack	*runner_2;

	runner_1 = stack;
	runner_2 = runner_1->next;
  while (runner_1 != NULL)
  {
    while (runner_2 != NULL)
    {
      printf("runner 1 content= %i\n", runner_1->content);
      printf("runner 2 content= %i\n", runner_2->content);
      if (runner_1->content == runner_2->content)
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
			ft_lstadd_back(&head, temp);
	}
	return (head);
}

void	display_list(t_stack *head)
{
	t_stack	*ptr;

	ptr = head->next;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->content);
		ptr = ptr->next;
	}
}
