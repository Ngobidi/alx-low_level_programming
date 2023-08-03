#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_binary - binary representation of a num
 * check the code
 *
 * @n: binary num (printed)
 */
void print_binary(unsigned long int n)
{
	unsigned long int bi_n;
	int data1;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (bi_n = n, data1 = 0; (bi_n >>= 1) > 0; data1++)
		;

	for (; data1 >= 0; data1--)
	{
		if ((n >> data1) & 1)
			printf("1");
		else
			printf("0");
	}
}
