/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Recette.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:58:21 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/19 21:04:54 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Recette.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbreard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/19 20:58:20 by jbreard           #+#    #+#             */
/*   Updated: 2020/09/19 20:58:20 by jbreard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */



    1) 
	// TANT QUE :  .  (i < 16) && (av < 5)
	// 				
	// 			   .  IF : si toute la ligne est differente
	// 			   		   si toute la colonne est differente
	// 			   		   si colonne up et colonne down 
	// 			   		   si ligne right et ligne left 
	//
	// 			   		   ALORS : 4 fonctions :
	// 			   		   						- si toute la ligne est differente : + 0
	// 			   		   						- sinon : + 1
	//
	// 			   		   			on aditionne les quatre
	// 			   		   			ET SI retour == 0
	// 			   		   				ALORS av[1][i]++
	// 			   		   				et i++;
	// 			   		   			ET SI CA NE MARCHE PAS : av[1][i]--
	//									et i--
	//
	//
	//
	// 			   		   	
