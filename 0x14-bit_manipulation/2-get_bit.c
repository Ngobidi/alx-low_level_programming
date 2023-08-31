#include "main.h"
#include <stdio.h>

/**
 * get_bit - obtain the value of bit at a specified index
 * @n: num to compute
 * @index: start up index from 0, of the bit case stud
 * Return: index_index Value when successful, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int kilo;

	if (index > 64)
		return (-1);

	kilo = n >> index;

	return (kilo & 1);
}
