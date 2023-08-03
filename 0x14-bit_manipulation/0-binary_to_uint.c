#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - binary number conversion
 * main - check the code
 *
 * @b: towards string of 0 and 1 chars
 * Return: converted numbers or 0, null
 * if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	int len;

	if (b == NULL)
		return (0)
