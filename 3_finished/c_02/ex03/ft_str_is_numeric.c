/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:18:45 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/06 06:33:19 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	number;
	int	result;
	int	only_number;

	i = 0;
	number = 0;
	result = 0;
	while (str[i] != '\0')
	{
		only_number = (str[i] >= 48 && str[i] <= 57);
		if (only_number)
		{
			number++;
		}
		i++;
	}
	if (i == number)
		result = 1;
	else
		result = 0;
	return (result);
}
