#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds a char in a str
 * @s: str to look for
 * @c: characters to search
 *
 * Return: a pointer to the first occurrence of the char
 * c in the str s, else Null when char not found
 */
char *_strchr(char *s, char c)
{
		int b;

		while (1)
		{
			b = *s++;
			if (b == c)
			{
				return (s - 1);
			}
			if (b == 0)
			{
				return (NULL);
			}
		}
}
