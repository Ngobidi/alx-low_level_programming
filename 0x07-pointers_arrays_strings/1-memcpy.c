#include "main.h"

/**
 * *_memcpy - function copies n bytes from memory area
 *  @dest: resulting memory area
 *  @src: memory area to be copied
 *  @n: num of bytes to be copied
 *
 *  Return: pointer to resulting memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
