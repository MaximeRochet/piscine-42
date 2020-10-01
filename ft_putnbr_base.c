/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 16:28:28 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/21 12:53:59 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		taille_base(char *base)
{
	int i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		pointeur_base(char *base, char c)
{
	int i;

	i = 0;
	while (base[i] != c)
		i++;
	return (i);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	ret;
	int			taille;

	ret = nbr;
	taille = taille_base(base);
	if (check_base(base) < 2)
		return ;
	if (ret < 0)
	{
		ret *= -1;
		write(1, "-", 1);
	}
	if (ret >= taille)
		ft_putnbr_base(ret / taille, base);
	write(1, &base[ret % taille], 1);
}
