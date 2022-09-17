/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 07:04:21 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/12 15:29:12 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{	
	if ((power < 0) || (nb == 0 && power != 0))
		return (0);
	if (((power == 0) && (nb == 0)) || (power == 0))
		return (1);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
