/*
** EPITECH PROJECT, 2017
** my_first_filling
** File description:
** my_bsq
*/

#include "my.h"

int **my_first_colum_filler(int colums, char **str, int **array)
{
	int k = 0;

	while (k < colums) {
		if (str[0][k] == '.')
			array[0][k] = 1;
		if (str[0][k] == 'o')
			array[0][k] = 0;
		k++;
	}
	return (array);
}

int **my_first_line_filler(int lines, char **str, int **array)
{
	int x = 0;

	while (x < lines) {
		if (str[x][0] == '.')
			array[x][0] = 1;
		if (str[x][0] == 'o')
			array[x][0] = 0;
		x++;
	}
	return (array);
}
