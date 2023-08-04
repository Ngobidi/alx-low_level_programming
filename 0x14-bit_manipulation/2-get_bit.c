#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * get_bit - value of a bit at a given index.
 * main - check the code
 *
 * Return: always  value of the bit at index or -1 if errror
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int book;

	if (index > 64)
		return (-1);

	book = n >> index;

	return (book & 1);
}
