/*
** EPITECH PROJECT, 2017
** my_get_number_of_lines
** File description:
** my_bsq
*/

#include "my.h"

int my_get_number_of_lines(char *buffer, int colums)
{
	int nb = 0;
	int i = 0;
	char *str = malloc(sizeof(char)*colums);

	while (buffer[i] != '\n') {
		str[i] = buffer[i];
		i++;
	}
	nb = my_getnbr(str);
	free(str);
	return (nb);
}
