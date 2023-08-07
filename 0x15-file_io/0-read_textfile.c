#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * read_textfile - Reads and prints POSIX standard output.
 * main - check the code
 * @filename: study file
 * @letters: letter numbers to read and print
 *
 * Return: the actual number of letters.
 * 0 if file is null, or can't open or read
 * also 0 if write fails or expected amount of byte.
 */
ssize_t read_textfile(const char *filename, size_t letters)
	{
	ssize_t x;
	ssize_t	y;
	ssize_t z;
	char *buffs;

	if (filename == NULL)
		return (0);

	buffs = malloc(sizeof(char) * letters);
	if (buffs == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buffs, letters);
	z = write(STDOUT_FILENO, buffs, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buffs);
		return (0);
	}

	free(buffs);
	close(x);

	return (z);
}
