#include <stdlib.h>
#include "main.h"

/**
 * *_memset -print allocate  memory with a constant byte
 * @s: selected memory area (to be filled)
 * @b: copying character
 * @n: num of times b to be copied
 *
 * Return: pointer to s (memory area)
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

/**
 * *_calloc - print a allocates memory for an array
 * @nmemb: num of components in the array
 * @size: size (components)
 *
 * Return: return pointer to memory allocated.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
