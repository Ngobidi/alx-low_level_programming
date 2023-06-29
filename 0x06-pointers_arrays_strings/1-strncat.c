#include "main.h"
/**
 * _strncat - print function that concatenate n bytes from a string to string
 * @dest: resulting string
 * @src:generating string
 * @n: num of bytes of str to concatenate
 *
 * Return: return a pointer (resulting string dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
