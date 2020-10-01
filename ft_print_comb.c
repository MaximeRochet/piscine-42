/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 09:59:40 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/10 12:18:27 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	affich(char i, char j, char k)
{
	write(1, &k, 1);
	write(1, &j, 1);
	write(1, &i, 1);
	if (k != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	k = '0';
	while (k <= '7')
	{
		j = k + 1;
		while (j <= '8')
		{
			i = j + 1;
			while (i <= '9')
			{
				affich(i, j, k);
				i++;
			}
			j++;
		}
		k++;
	}
}
