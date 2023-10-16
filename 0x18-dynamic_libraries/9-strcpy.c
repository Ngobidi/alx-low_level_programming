#include "main.h"

/**
 * *_strcpy - cpy the str pointed to by src
 *
 * @dest: pointer to the buffer in which we cpy the str
 * @src: str to be cpy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, x;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
