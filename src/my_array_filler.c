/*
** EPITECH PROJECT, 2017
** my_array_filler
** File description:
** my_bsq
*/

#include "my.h"

char **my_array_filler(char *buffer, char **str, int colums, int lines)
{
	int k = 0;
	int x = 0;
	int y = 0;

	while (buffer[k] != '\n')
		k++;
	for (y = y ; y < lines; y++) {
		for(x = 0; x < colums; x++) {
			k = my_backslash_n_gestion(k, buffer);
			str[y][x] = buffer[k];
			k++;
		}
	}
	return (str);
}
