#include "main.h"
#include <stdio.h>

/**
 * flip_bits - switch bits to number conversion
 * @n: initial num
 * @m: next num been converted
 * Return: flip bit values required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int contrast;
	int values;

	contrast = n ^ m;
	values = 0;

	while (contrast)
	{
		values++;
		contrast &= (contrast - 1);
	}

	return (values);
}
