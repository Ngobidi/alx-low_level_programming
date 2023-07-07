#include "main.h"

/**
 * _strncpy - function copies a string
 * @dest: resulting string
 * @src: generating string
 * @n: num of bytes to be copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	z = 0;

	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		z++;
	}

	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}

	return (dest);
}
