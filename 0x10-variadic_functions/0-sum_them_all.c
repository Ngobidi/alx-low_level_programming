#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - compute sum of all the parameters
 * @n: num arguments passed to process
 *
 * Return: return the sums
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
