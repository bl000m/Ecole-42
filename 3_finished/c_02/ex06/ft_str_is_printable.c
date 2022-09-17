/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:45:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/05 12:00:56 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;
	int	result;
	int	only_printable;

	i = 0;
	printable = 0;
	result = 0;
	while (str[i] != '\0')
	{
		only_printable = (str[i] >= 32 && str[i] <= 126);
		if (only_printable)
		{
			printable++;
		}
		i++;
	}
	if (i == printable)
		result = 1;
	else
		result = 0;
	return (result);
}
