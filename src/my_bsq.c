/*
** EPITECH PROJECT, 2017
** my_bsq
** File description:
** my_bsq
*/

#include "my.h"

int my_bsq(long size, char *av)
{
	int fd = open(av, O_RDONLY);
	char* buffer = malloc(sizeof(char) * size);
	int i = read(fd, buffer, size);
	int k = 0;

	if (i < 0)
		return (84);
	while (buffer[k] != '\n')
		k++;
	if (my_array_one_line(buffer, k + 1) == 1)
		my_bsq_one_colum_only(buffer, k);
	else {
		if(my_get_number_of_lines
		(buffer,my_array_one_line(buffer,k + 1)) == 1)
			my_bsq_one_line_only(buffer, k);
		else
			my_array_creator(buffer, k);
	}
	free(buffer);
	close (fd);
	return (0);
}
