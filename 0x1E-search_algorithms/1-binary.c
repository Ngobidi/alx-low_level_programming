#include "search_algos.h"

/**
 * binary_search - look for a value in an int array adopting a binary
 * search algorithm, not guaranteed to return lowest index if `value`
 * dublicates i the array
 * @array: first_element of array to find
 * @size: num of elements in array
 * @value: value to determined
 *
 * Return: `value` middle, or -1 if `value` not found in the index or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, middle, high;
	int a;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		middle = (low + high) / 2;

		printf("Searching in array: ");
		for (a = low; a <= high; a++)
			printf("%i%s", array[a], a == high ? "\n" : ", ");

		if (array[middle] < value)
			low = middle + 1;
		else if (array[middle] > value)
			high = middle - 1;
		else
			return (middle);
	}

	return (-1);
}
