/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 22:29:55 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/22 16:48:40 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 2)
		return (2);
	i = nb;
	while (i / 2 < nb)
	{
		if (is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}
