/*
** EPITECH PROJECT, 2017
** my_square_filler
** File description:
** my_bsq
*/

#include "my.h"

char **my_square_filler(int x, int y, int stock, char **str)
{
	int x_mem = x;
	int y_mem = y;
	int y_base_pos = y;
	int stock_2 = stock - 1;

	if (stock == 0)
		return (str);
	str[y][x] = 'x';
	for (x_mem = stock; x_mem > 0; x_mem--) {
		for(y_mem = stock_2; y_mem > 0; y_mem--) {
			str[y][x] = 'x';
			y--;
		}
		str[y][x] = 'x';
		y = y_base_pos;
		x--;
	}
	return (str);
}
