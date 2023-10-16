#include "main.h"

/**
 * *_memcpy - cp memory_area
 *  @dest: resulting memory_area
 *  @src: memory_area to cpy
 *  @n: num of bytes to cpy
 *
 *  Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
