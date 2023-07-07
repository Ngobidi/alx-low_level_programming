#include "main.h"
#include <stdio.h>

/**
 * *_strchr - find a character in a string
 * @s: string to find
 * @c: character to search
 *
 * Return: a pointer to the first occurrence of the char
 * c in the string s, or NULL if the char is not available
 */
char *_strchr(char *s, char c)
{
		int z;

		while (1)
		{
			z = *s++;
			if (z == c)
			{
				return (s - 1);
			}
			if (z == 0)
			{
				return (NULL);
			}
		}
}
