#include "main.h"

/**
 * *_strspn - find the length of a prefix substring
 * @s: string to compute
 * @accept: string containing the list of char to match in s
 *
 * Return: the num of bytes in the initial segment
 * of s which consist bytes from accept only
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, flag;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (c);
		}
	}

	return (0);
}
