#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - implement a task (function) of a given parameter on each
 * element of an array
 * @array: array (iterate)
 * @size: array size
 * @action: pointer to function need
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
		return;

	for (x = 0; x < size; x++)
		action(array[x]);
}
