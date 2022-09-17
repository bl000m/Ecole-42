/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 17:52:54 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/05 11:28:35 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	letter;
	int	result;
	int	a_z;
	int	a_z_maj;

	i = 0;
	letter = 0;
	result = 0;
	while (str[i] != '\0')
	{
		a_z = (str[i] >= 97 && str[i] <= 122);
		a_z_maj = (str[i] >= 65 && str[i] <= 90);
		if ((a_z) || (a_z_maj) || (str[i] == 32))
		{
			letter++;
		}
		i++;
	}
	if (i == letter)
		result = 1;
	else
		result = 0;
	return (result);
}
