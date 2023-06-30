#include "main.h"

/**
 * _strncpy -print function copies a string
 * @dest: resulting string
 * @src: generating string
 * @n: num of bytes to copy
 *
 * Return: return pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
