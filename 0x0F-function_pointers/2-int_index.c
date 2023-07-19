#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: searching array
 * @size: array size
 * @cmp: pointer to the function compared
 *
 * Return: result index of the first element (conditions)
 * if cmp function doesn't return 0,
 * if no match is found return -1 or
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}

	return (-1);
}
