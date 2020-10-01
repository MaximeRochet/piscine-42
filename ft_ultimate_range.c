/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 18:04:14 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/30 16:20:08 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
	int		*tab;

	i = 0;
	tab = NULL;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	if (!(tab = (int *)malloc(sizeof(int) * size)))
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	range[0] = tab;
	return (i);
}
