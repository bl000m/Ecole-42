/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 17:58:42 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/12 15:28:12 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((power < 0) || (nb == 0 && power != 0))
		return (0);
	if (((power == 0) && (nb == 0)) || (power == 0))
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
}
