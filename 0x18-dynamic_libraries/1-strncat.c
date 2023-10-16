#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: resulting string
 * @src: sourcing string
 * @n: num of bytes of strings to concatenate
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, j;

	x = 0;
	j = 0;

	while (dest[x] != '\0')
		x++;

	while (src[j] != '\0' && j < n)
	{
		dest[x] = src[j];
		x++;
		j++;
	}

	dest[x] = '\0';

	return (dest);
}
