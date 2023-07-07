#include "main.h"

/**
 * *_strspn - find the length of a prefix substring
 * @s: string to compute
 * @accept: string containing the list of char to match in s
 *
 * Return: the num of bytes in the initial segment
 * of s which contained only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, flag;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (f);
		}
	}

	return (0);
}
