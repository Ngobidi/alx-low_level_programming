#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function find a substring
 * @haystack: string to find
 *  @needle: substring to find
 *
 *  Return: return pointer to the beginning of the located substring
 *  or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}

