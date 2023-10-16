#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - obtain a str for any of a set of bytes
 * @s: str to get
 * @accept: str containing the bytes to search
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * else NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int x, j;

	for (x = 0; *s != '\0'; x++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
