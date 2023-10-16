#include "main.h"

/**
 * *_strspn - obtain the len of a prefix substr
 * @s: str to compute
 * @accept: str containing the list of characters to match in s
 *
 * Return: the number of bytes in the first segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, j, f, flag;

	f = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[x] == accept[j])
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
