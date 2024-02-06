#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - helper to `advanced-binary`, recursively search
 * for a value in an int array
 * @array: first_element of array to seach
 * @value: value to look for
 * @low: starting_index in array
 * @high: ending_index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t middle, a;

	if (!array)
		return (-1);

	middle = (low + high) / 2;
	printf("Searching in array: ");
	for (a = low; a <= high; a++)
		printf("%i%s", array[a], a == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[middle] < value)
			return (binary_search_recursion(array, value,
							middle + 1, high));
		if (array[middle] >= value)
			return (binary_search_recursion(array, value,
							low, middle));
	}

	return (-1);
}

/**
 * advanced_binary - look for a value in a sorted array of int
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: first_element of array to look for
 * @size: num of elements in array
 * @value: value to look for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
