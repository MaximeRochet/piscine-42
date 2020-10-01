/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 12:05:26 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/29 20:47:15 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_base(char *base);
int		is_in(char c, char*base);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_atoi(char *nbr, char *base)
{
	int			i;
	int			signe;
	long int	ret;

	i = 0;
	signe = 1;
	ret = 0;
	while ((nbr[i] >= 9 && nbr[i] <= 13) || nbr[i] == 32)
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			signe *= -1;
		i++;
	}
	while (is_in(nbr[i], base) >= 0)
	{
		ret = ret * ft_strlen(base) + is_in(nbr[i], base);
		i++;
	}
	return (ret * signe);
}

int		size_mal(int nbr, char *base)
{
	int taille;

	taille = 0;
	if (nbr <= 0)
		taille++;
	while (nbr != 0)
	{
		nbr /= ft_strlen(base);
		taille++;
	}
	return (taille);
}

char	*ft_itoa(long int nbr, char *base)
{
	int		i;
	char	*ret;
	int		tmp_nbr;

	i = size_mal(nbr, base);
	tmp_nbr = nbr;
	if (nbr < 0)
		nbr *= -1;
	if (!(ret = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i--;
	if (nbr == 0)
		ret[0] = '0';
	while (nbr != 0)
	{
		ret[i] = base[nbr % ft_strlen(base)];
		nbr /= ft_strlen(base);
		i--;
	}
	ret[size_mal(tmp_nbr, base)] = '\0';
	if (tmp_nbr < 0)
		ret[0] = '-';
	return (ret);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char			*ret;
	long int		dec;

	if ((check_base(base_from) < 2) || (check_base(base_to) < 2))
		return (0);
	dec = ft_atoi(nbr, base_from);
	ret = ft_itoa(dec, base_to);
	return (ret);
}
