#include <stdlib.h>
#include "main.h"

/**
 * *array_range - produce an array of int
 * @min: mini range of values stored
 * @max: maxi range of values stored and number of components
 *
 * Return: return pointer to the resulting array (new array)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
