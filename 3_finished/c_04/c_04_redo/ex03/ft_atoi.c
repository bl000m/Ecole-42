/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:39:03 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/14 15:43:14 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	result = 0;
	minus = 0;
	while ((str[i] == 32) || (str[i] == 9) || (str[i] == 10)
		|| (str[i] == 11) || (str[i] == 12) || (str[i] == 13))
		i++;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
		minus++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}		
	if (minus % 2 != 0)
		return (result * - 1);
	return (result);
}
