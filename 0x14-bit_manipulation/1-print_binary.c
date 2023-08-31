#include "main.h"
#include <stdio.h>

/**
 * print_binary - display binary reps of a num
 * @n: decimal num to display in binary form
 * return: binary form
 */
void print_binary(unsigned long int n)
{
	unsigned long int lim;
	int next;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (lim = n, next = 0; (lim >>= 1) > 0; next++)
		;

	for (; next >= 0; next--)
	{
		if ((n >> next) & 1)
			printf("1");
		else
			printf("0");
	}
}
