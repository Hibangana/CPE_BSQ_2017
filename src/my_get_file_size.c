/*
** EPITECH PROJECT, 2017
** my_get_file_size
** File description:
** my_bsq
*/

#include "my.h"

long my_get_file_size(char *av)
{
	struct stat stock;
	long size = 0;

	stat((av), &stock);
	size = stock.st_size;
	return (size);
}
