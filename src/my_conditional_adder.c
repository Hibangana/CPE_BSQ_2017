/*
** EPITECH PROJECT, 2017
** my_conditionnal_adder
** File description:
** my_bsq
*/

#include "my.h"

int **my_dot_case_array(int y, int x, int **array, char **str)
{
	if (str[y][x] == '.') {
		array[y][x] = my_comparator(array[y-1][x], array[y][x-1],
					array[y-1][x-1]);
	}
	if (str[y][x] == 'o') {
		array[y][x] = 0;
	}
	return (array);
}

my_t my_max_value(my_t my_struct, int** array)
{
	if (my_struct.stock_nb < array[my_struct.y][my_struct.x]) {
		my_struct.stock_nb = array[my_struct.y][my_struct.x];
		my_struct.x_pos = my_struct.x;
		my_struct.y_pos = my_struct.y;
	}
	return (my_struct);
}

char **my_square_looper(my_t my_struct, char **str)
{
	if (my_struct.x == my_struct.x_pos && my_struct.y == my_struct.y_pos)
		str = my_square_filler(my_struct.x, my_struct.y,
				my_struct.stock_nb, str);
	return (str);
}
