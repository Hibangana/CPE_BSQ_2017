/*
** EPITECH PROJECT, 2017
** my_array_creator
** File description:
** my_bsq
*/

#include "my.h"

void my_array_creator(char *buffer, int count)
{
	int k = count+1;
	int colums = my_get_number_of_colums(buffer, k);
	int lines = my_get_number_of_lines(buffer, colums);
	int **array = malloc(sizeof(int*) * lines);
	char**str = malloc(sizeof(char*) * lines);

	for (int i = 0; (i < lines) ;i++){
		array[i] = malloc(sizeof(int) * colums);
		str[i] = malloc(sizeof(char) * colums);
	}
	str = my_array_filler(buffer,str, colums, lines);
	my_array_finder(str, array, colums, lines);
}
