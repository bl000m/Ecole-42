/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:30:35 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/06 10:39:18 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	letter_min;
	int	result;
	int	only_letter_min;

	i = 0;
	letter_min = 0;
	result = 0;
	while (str[i] != '\0')
	{
		only_letter_min = (str[i] >= 97 && str[i] <= 122);
		if (only_letter_min)
		{
			letter_min++;
		}
		i++;
	}
	if ((i == letter_min) || (str[0] == '\0'))
		result = 1;
	else
		result = 0;
	return (result);
}
