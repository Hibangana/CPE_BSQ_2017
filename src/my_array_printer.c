/*
** EPITECH PROJECT, 2017
** my_array_printer
** File description:
** my_bsq
*/

#include "my.h"

void my_array_printer(char **str, int lines, int colums)
{
	for (int x = 0; x < lines ; x++) {
		write(1, str[x], colums);
		my_printf("\n");
	}
}
