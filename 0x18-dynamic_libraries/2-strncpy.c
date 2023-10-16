#include "main.h"

/**
 * _strncpy - cpy a str
 * @dest: resulting str
 * @src: sourcing str
 * @n: num of bytes to cpy
 *
 * Return: pointer to the dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
