#include "main.h"

/**
 * *_memcpy - copies memory area
 *  @dest: destination memory area
 *  @src: memory area to copy from
 *  @n: num of bytes to copy
 *
 *  Return: return pointer to dest
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
