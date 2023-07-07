#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to compute
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int z;

	z = 0;

	while (s[z] != '\0')
	{
		z++;
	}

	return (z);
}
