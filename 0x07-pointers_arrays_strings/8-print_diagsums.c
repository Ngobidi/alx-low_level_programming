#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - write the sum of the two diagonals
 * matrix of integers (square)
 * @a: square matrix of which we compute the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int x;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;
	for (x = 0; x < size; x++)

	{
		sum += a[(size * x) + x];
		sum1 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
