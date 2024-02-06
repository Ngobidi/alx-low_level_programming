#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - result the minimum of two size_t values
 * @a: value_first
 * @b: value_second
 *
 * Return: `a` if < or =`b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - look for a value in an int array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * dublicate in `array` (modified from `binary_search`)
 * @array: first element of array to seach
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 *
 * Return: `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t middle, a;

	if (!array)
		return (-1);

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
			return ((int)middle);
	}

	return (-1);
}

/**
 * exponential_search - look for a value in a sorted array of int
 * using an exponential search_algorithm
 * @array: first_element of array to search
 * @size: num of elements in array
 * @value: value to look for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);
	/* 'found' message generated even if array[high] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
