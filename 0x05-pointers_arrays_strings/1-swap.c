#include "main.h"

/**
 * swap_int - function that swaps two integers (values)
 * @a: pointer to value1
 * @b: pointer to value2
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
