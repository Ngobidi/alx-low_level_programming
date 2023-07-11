#include <stdlib.h>
#include "main.h"

/**
 * count_word - write a function that count the num of words in a string
 * @s: string to computed
 *
 * Return: num of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - function splits a string into words
 * @str: string (split)
 *
 * Return: pointer to an array of strings (Successful)
 * or NULL (failure)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = a;
	}

	matrix[k] = NULL;

	return (matrix);
}
