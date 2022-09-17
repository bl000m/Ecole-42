/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 13:25:16 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/06 14:07:00 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		lettre_min;
	int		lettre_maj;

	if (((str[0] >= 97) && (str[0] < 122)) && (str[0] != '\0'))
		str[0] -= 32;
	i = 0;
	while (str[i] != '\0')
	{	
		lettre_min = ((str[i] >= 97) && (str[i] <= 122));
		lettre_maj = ((str[i] >= 65) && (str[i] <= 90));
		if ((i > 0) && (((str[i - 1] < 48) || (str[i - 1] > 57))
				&& ((str[i - 1] < 97) || (str[i - 1] > 122))
				&& ((str[i - 1] < 65) || (str[i - 1] > 90))))
		{
			if (lettre_min)
				str[i] -= 32;
		}
		if ((lettre_maj) && (i != 0))
			str[i] += 32;
		i++;
	}
	return (str);
}
