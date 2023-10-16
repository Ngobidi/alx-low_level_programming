#include "main.h"

/**
 * _strlen - length of a str
 * @s: str to compute
 *
 * Return: length of the str
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
