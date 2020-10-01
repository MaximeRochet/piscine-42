/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 16:38:59 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/29 19:47:08 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calcul_taille(int min, int max)
{
	int taille;

	taille = max - min;
	taille = (taille < 0 ? taille *= -1 : taille);
	return (taille);
}

int		*ft_range(int min, int max)
{
	int i;
	int size;
	int *array;

	i = 0;
	if (max <= min)
	{
		array = NULL;
		return (0);
	}
	size = calcul_taille(min, max);
	if (!(array = (int *)malloc(sizeof(int) * size)))
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
