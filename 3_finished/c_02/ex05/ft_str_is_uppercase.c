/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 11:41:34 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/06 10:44:24 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	letter_maj;
	int	result;
	int	only_letter_maj;

	i = 0;
	letter_maj = 0;
	result = 0;
	while (str[i] != '\0')
	{
		only_letter_maj = (str[i] >= 65 && str[i] <= 90);
		if (only_letter_maj)
		{
			letter_maj++;
		}
		i++;
	}
	if ((i == letter_maj) || (str[0] == '\0'))
		result = 1;
	else
		result = 0;
	return (result);
}
