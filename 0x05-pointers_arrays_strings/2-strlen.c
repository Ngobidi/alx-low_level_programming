#include "main.h"

/**
 * _strlen - function the length of a string to be returned
 * @s: string to calculate
 *
 * Return: return lenth of a string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
