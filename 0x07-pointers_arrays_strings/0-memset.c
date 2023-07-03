#include "main.h"

/**
 * *_memset - print fills memory with a constant byte
 * @s: memory area
 * @b: character to (copied)
 * @n: num of times to copy (charaters b)
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
