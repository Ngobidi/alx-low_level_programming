#include "main.h"
#include <stdio.h>
/**
 * clear_bit - rm the bit values 0 at a specified index
 * @n: decimal num of the specified index pointer
 * @index: index_index starting from 0 of the bit specified
 * Return: 1 on successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;
	unsigned int kilo;

	if (index > 64)
		return (-1);
	kilo = index;
	for (z = 1; kilo > 0; z *= 2, kilo--)
		;

	if ((*n >> index) & 1)
		*n -= z;

	return (1);
}
