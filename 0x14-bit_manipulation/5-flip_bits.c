#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * flip_bits - bit to flip to get another
 * main - check the code
 *
 * Return: num of bit fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int cash;
	int value_x;

	cash = n ^ m;
	value_x = 0;

	while (cash)
	{
		value_x++;
		cash &= (cash - 1);
	}

	return (value_x);
}
