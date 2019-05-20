/*
** EPITECH PROJECT, 2017
** my_bsq
** File description:
** my_bsq
*/

#include "my.h"

int main(int ac, char **av)
{
	long size = 0;

	if (my_bsq_error_check(ac, av) == 84)
		return (84);
	size = my_get_file_size(av[1]);
	return (my_bsq(size, av[1]));
}
