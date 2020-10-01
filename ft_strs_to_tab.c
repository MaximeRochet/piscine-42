/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 00:17:29 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/30 15:34:13 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char	*ft_strcp(char *src, char *dest)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = malloc(sizeof(*dest) * (i + 1))))
		return (0);
	dest = ft_strcp(src, dest);
	return (dest);
}

int strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int 		i;
	s_stock_str	*structure;

	i = 0;
	if(!(structure = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1))))
			return(0);
	while(i < structure)
	{
		typedef struct s_stock_str 
		{
			structure[i].size = strlen(av[i]); 
			structure[i].str = av[i]; 
			structure[i].copy = ft_strdup(av[i]); 
			i++;
		}
		hope[i].str = NULL;
	}
	i++;
	return (structure);
}
