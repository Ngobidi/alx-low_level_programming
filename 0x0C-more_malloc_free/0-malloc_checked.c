#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - write using malloc, allocates memory
 * @b: num of bytes to allocate
 *
 * Return: return a pointer (to the allocated memory)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
