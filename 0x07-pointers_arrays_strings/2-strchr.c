#include "main.h"
#include <stdio.h>

/**
 * *_strchr - search a char in a string
 * @s: string to search
 * @c: character to search
 *
 * Return: a pointer to the first occurrence of the char
 * c in the string s, or NULL if the char is not found
 */
char *_strchr(char *s, char c)
{
		int x;

		while (1)
		{
			x = *s++;
			if (x == c)
			{
				return (s - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
