/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:19:20 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/10 14:07:19 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
	* 1.
	* it's a program, so write the main that read buffer from stinpt (1) => STDIN_FILENO
	* check if error in reading fd :
	* convert string in separated int => split string and then atoi it
	* using gnl ?
	* stock each int in a node of a linked list
	* main send the linked list out to check_error functions
	* check_error verify the list and:
		* if no parameter => prompt back (or is the main doing that?)
		* if not all int / arg > max_int / duplicates => display "error \n" on std error
	* main send the linked list out to the function push_swap

	* 2.
	* considering that first node is the top of the stack
	* first node needs to be the lower
	* create t_list stack b empty
	* Define a node current which will point to head.
	* Define another node index which will point to node next to current.
	* Compare data of current and index node.
	* Current will point to current.
	* Continue this process until the entire list is sorted.

	* 3.
	* create an algo for each INSTRUCTION allowded

	* 4.
	* push_swap execute different INSTRUCTIONS while looping on the linked list
	* if stack_a-node 1 > stack_a-node 2 => sa + pb + stack_a-node 2 = first node
	* until all numbers in remaining stack_a nodes > numbers in stack_b (or until n. nb = nb/2?)
	from now on we work on both the stack simultaneously
	A
	* if stack_a-node > stack_a-next-node && stack_a-node > all stack_b nodes && until node->next = NULL
	* or if stck_a-next-node > next-next => Rotate
	* if the contrary ROTATE REVERSE
	B
	* idem but at the contrary => function that does the same thing for both ?
	when A is in ascending order and B are in descendin order
	- at the condition (already verified) that
	the first of A is > the first of B -
	start PA as much time as there are number in B (stack B empty)

	INSTRUCTIONS allowded
	* sa / sb / ss (swap)
	* pa / pb (push)
	* ra / rb / rr (rotate => shift up)
	* rra / rrb /rrr (reverse rotate => shift down)
*/
void	push_swap(t_stack **stack_a)
{
	if (stack_size(*stack_a) == 2)
	{
		if ((*stack_a)->nb > (*stack_a)->next->nb)
			s(stack_a);
	}
	if (stack_size(*stack_a) == 3)
		case_3(stack_a);
	if (stack_size(*stack_a) == 5 || stack_size(*stack_a) == 4)
		case_5(stack_a);
	if (stack_size(*stack_a) > 5 && stack_size(*stack_a) < 100)
		case_100(stack_a);
}
