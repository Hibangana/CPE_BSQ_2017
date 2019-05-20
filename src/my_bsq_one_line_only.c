/*
** EPITECH PROJECT, 2017
** my_bsq_one_line_only
** File description:
** my_bsq
*/

#include "my.h"

void my_bsq_one_line_only(char *buffer, int k)
{
	int i = k + 1;
	int count = 0;

	while (count < 1 && buffer[k]) {
		if (buffer[k] == '.') {
			buffer[k] = 'x';
			count = count + 1;
		}
		k++;
	}
	while (buffer[i]) {
		my_putchar(buffer[i]);
		i++;
	}
}
