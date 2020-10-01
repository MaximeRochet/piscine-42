/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 22:08:58 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/11 11:11:43 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int division;
	int modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}
