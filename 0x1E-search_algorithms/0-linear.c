#include "search_algos.h"

/**
 * linear_search - look for a value in an array of
 * int using the Linear search algorithm
 *
 * @array: array_input
 * @size: array_size
 * @value: value to look for
 * Return: EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%li] = [%i]\n", a, array[a]);
		if (array[a] == value)
		{
			return (a);
		}
	}
	return (-1);
}
