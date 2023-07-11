#include <stdlib.h>
#include "main.h"

/**
 * *create_array - write an array of characters and initialize,
 * with a unique (specifi) character
 * @size: size of the array (to be created)
 * @c: character to initialize the array c
 *
 * Return: pointer to the array (validated), NULL (else)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
