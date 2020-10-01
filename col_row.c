/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   col_row.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:01:27 by mrochet           #+#    #+#             */
/*   Updated: 2020/09/20 15:59:55 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void *same_num_row(int *array)
{
	int line;
	int box_check;
	int box;

	line  = 0;
	//parcour les lignes
	while (line < 4 )
	{
		box  = 0;
		//parcour les cases de la ligne
		//carre = case a comparer a toutes celle de la ligne
		while( box / 4 = line)
		{
			box_check == line;
			//compare case i avec toutes les cases de la ligne
			while (box_check < line + 4)
			{
				while (array[box] == array[box_check])
					array[box]++;
				box_check++;
			}
			box++;	
		}
		line++;
	}
}

void *same_num_col(int *array)
{
	int column;
	int box_check;
	int box;

	column = 0;
	//parcour les colonnes
	while (column < 3)
	{
		box  = 0;
		//parcour les cases de la colonne
		//carre = case a comparer a toutes celles de la colonne
		while( box  % 4 = column)
		{
			box_check == column;
			//compare case i avec toutes les cases de la colonne
			while (box_check < column + 4)
			{
				while (array[box] == array[box])
					array[box]++;
				box_verif++;
			}
			box + 4;
			if (box > 15)
				box -= 15	
		}
		column++;
	}
}




int main(void);
{
	int array[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
	if (!(array = (int *)malloc(sizeof(int) * 16)))
		return (0);
	array = same_num_col(array);
	array = same_num_row(array);

	free(array);
}
