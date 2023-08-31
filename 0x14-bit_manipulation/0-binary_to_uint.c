#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - change binary number to unsigned integrals
 * @b: charact string
 * Return: converted num or 0 if non coverted charaters exit or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int group, bit;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
	}

	for (bit = 1, group = 0, length--; length >= 0; length--, bit *= 2)
	{
		if (b[length] == '1')
			group += bit;
	}

	return (group);
}
