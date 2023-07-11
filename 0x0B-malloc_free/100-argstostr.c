#include "main.h"
#include <stdlib.h>
/**
  *argstostr - print concatenates all arguments (programs).
  *@ac: count (arguments)
  *@av: pointer to array of size ac.
  *Return: return NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on unsuccessful.
  */
char *argstostr(int ac, char **av)
{
	int a, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (n = 0; av[a][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (n = 0; av[a][n]; n++)
	{
		str[r] = av[a][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
