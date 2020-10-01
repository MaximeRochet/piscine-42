/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/30 11:12:00 by mrochet           #+#    #+#             */
/*   Updated: 2020/10/01 00:21:06 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return(1);
		i++;
	}
	return (0);
}

int		count_line(char *str, char *charset)
{
	int i;
	int l;
	
	i = 0;
	l = 0;
	while (str[i])
	{
		while (is_charset(str[i],charset) == 1 && str[i])
			i++;
		if (is_charset(str[i],charset) == 0 && str[i])
			l++;
		while (is_charset(str[i],charset) == 0 && str[i])
			i++;
	}
	return (l);
}
void	create_line(char *str, char *charset, char ***tab)
{
	int i;
	int c;
	int l;

	i = 0;
	c = 0;
	l = 0;
	while (str[i])
	{
		while (is_charset(str[i],charset) == 1 && str[i])
			i++;
		while (is_charset(str[i],charset) == 0 && str[i])
		{
			i++;
			c++;
		}
		if(c > 0)
		{
			if(!(*tab[l] = (char *)malloc(sizeof(char)* (c + 1))))
				return ;
			l++;
			c = 0;
		}
	}
}

void	ft_strcpy(char *str, char *charset, char ***tab)
{
	int i;
	int c;
	int l;

	i = 0;
	c = 0;
	l = 0;
	while (str[i])
	{
		while (is_charset(str[i],charset) == 1 && str[i])
			i++;
		while (is_charset(str[i],charset) == 0 && str[i])
		{
			*tab[l][c] = str[i]; 
			i++;
			c++;
		}
		*tab[l][c] = '\0';
		if(c > 0)
			l++;
	}
	*tab[l] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char **tab;
	int line;

	printf("0\n");
	tab = NULL;
	line = count_line(str,charset);
	if (!(tab=(char**)malloc(sizeof(char *) * (line + 1))))
		return (0);
	printf("1\n");
	create_line(str,charset,&tab);
	printf("2\n");
	ft_strcpy(str,charset,&tab);
	printf("3\n");
	return(tab);
}


int main(int ac, char **av)
{
	(void)ac;
	int i = -1;
    char **tab;
	printf("compteur de ligne%d",count_line(av[1],av[2]));
	tab = ft_split(av[1],av[2]);
	while(tab[++i])
	{
		printf("%s",tab[i]);
	}
}
