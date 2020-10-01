/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 13:10:26 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/22 16:30:51 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
		i *= ft_recursive_factorial(nb - 1);
	return (i);
}
