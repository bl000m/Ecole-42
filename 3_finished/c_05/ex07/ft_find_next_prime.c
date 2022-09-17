/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpagani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:16:03 by mpagani           #+#    #+#             */
/*   Updated: 2022/09/12 17:45:24 by mpagani          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb ++;
	return (nb);
}

int	ft_is_prime(int nb)

{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	else
	{
		while (i <= nb / i)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
}
