#include <stdio.h>
#include "main.h"

/**
 * print_array - write n elements (array of integers)
 * next by a new line
 * @a: array
 * @n: number (elements)
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
		printf("\n");
}
