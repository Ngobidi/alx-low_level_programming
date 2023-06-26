#include "main.h"

/**
 * char *_strcpy - program that copies the string pointed to by src
 * followed by terminating null byte (\0)
 * then  to the buffer pointed to by dest
 * @dest: copy to string
 * @src: copied from string
 * Return: pointer to dest
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
