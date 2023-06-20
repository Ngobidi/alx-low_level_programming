#include <stdio.h>

/**
 * main - write first 50 Fibonacci numbers, starting with 1 and 2,
 *        followed by comma, and a new space.
 *
 * Return: Always 0. (when check is over)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
