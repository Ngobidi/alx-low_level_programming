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
	int a, b, c, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			size++;
			b++;
		}
		size++;
		a++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		b = 0;
		while (av[a][b])
		{
			arg[c] = av[a][b];
			b++;
			c++;
		}
		arg[c] = '\n';
		c++;
		a++;
	}
	arg[c] = '\0';
	return (arg);
}
