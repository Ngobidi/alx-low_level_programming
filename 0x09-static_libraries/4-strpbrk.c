#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - find a string for any of a set of bytes
 * @s: string to find
 * @accept: stringcontaining the bytes to search
 *
 * Return: pointer to the byte in s that correspond with bytes in accept
 * or NULL if byte doesn't correspond
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; *s != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (*s == accept[b])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
