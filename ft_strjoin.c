/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:03:39 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/29 20:17:33 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		taille_dest(int size, char **strs, char *sep)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	k = 0;
	l = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			l++;
			j++;
		}
		i++;
	}
	while (sep[k])
		k++;
	if (l == 0)
		return (0);
	i = l + k * (size - 1);
	return (i);
}

char	*create_string(int size, char **strs, char *sep, char *dest)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			dest[k++] = strs[i][j++];
		j = 0;
		while (sep[j])
		{
			if (i < size - 1)
				dest[k++] = sep[j];
			j++;
		}
		i++;
	}
	dest[k] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *dest;

	if (taille_dest(size, strs, sep) == 0)
	{
		if (!(dest = (char *)malloc(sizeof(char) * 1)))
		{
			dest[0] = '\0';
			return (dest);
		}
	}
	if (!(dest = (char *)malloc(sizeof(char) *
					taille_dest(size, strs, sep) + 1)))
		return (0);
	return (create_string(size, strs, sep, dest));
}
