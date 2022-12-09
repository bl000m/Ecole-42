/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <mpagani@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:05:21 by mpagani           #+#    #+#             */
/*   Updated: 2022/12/08 08:56:27 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	display_list(t_stack *head)
{
	t_stack	*ptr;

	ptr = head;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->nb);
		ptr = ptr->next;
	}
}
