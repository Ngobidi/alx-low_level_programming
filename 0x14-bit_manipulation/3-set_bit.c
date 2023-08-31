#include "main.h"

/**
 * set_bit - fetch values of a bits to 1 at a specifies index
 * @n: decimal num at the specifies index pointer
 * @index: index_index starting from 0 of the bit specified
 * Return: 1 on sucessfull, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int q;

	if (index > 64)
		return (-1);

	for (q = 1; index > 0; index--, q *= 2)
		;
	*n += q;

	return (1);
}
