/*
** EPITECH PROJECT, 2017
** my_array_finder
** File description:
** my_bsq
*/

#include "my.h"

void my_free_city(int **array, int lines, char **str)
{
	for (int y = 0; y < lines ; y++) {
		free(array[y]);
		free(str[y]);
	}
	free(str);
	free(array);
}

void my_array_finder(char **str, int **array, int colums, int lines)
{
	int x = 0;
	int y = 0;
	my_t my_struct;

	my_struct.stock_nb = 0;
	array = my_first_colum_filler(colums, str, array);
	array = my_first_line_filler(lines, str, array);
	for(y = 1; y < lines; y++) {
		for (x = 1; x < colums; x++)
			array = my_dot_case_array(y,x,array,str);
	}
	for(my_struct.y = 1; my_struct.y < lines; my_struct.y++) {
		for (my_struct.x = 1; my_struct.x < colums; my_struct.x++)
			my_struct = my_max_value(my_struct,array);
	}
	for(my_struct.y = 0; my_struct.y < lines; my_struct.y++) {
		for (my_struct.x = 0; my_struct.x < colums; my_struct.x++)
			str = my_square_looper(my_struct, str);
	}
	my_array_printer(str, lines, colums);
	my_free_city(array,lines,str);
}
