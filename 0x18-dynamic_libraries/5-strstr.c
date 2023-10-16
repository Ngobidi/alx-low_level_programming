#include "main.h"
#include <stdio.h>

/**
 * *_strstr - obtain a substr
 * @haystack: str to obtained
 * @needle: substr to searched
 *
 * Return: pointer to the beginning of the located substr
 * else NULL if the substr is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int x, j;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[x + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[x]);
	}
	return (NULL);
}
