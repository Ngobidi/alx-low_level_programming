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
	int a;
	
	a = 0;

	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
