#include "main.h"

/**
 * *_memset - function fills memory (a constant byte)
 * @s: memory area
 * @b: character to copy
 * @n: num of times to copy character (b)
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}
