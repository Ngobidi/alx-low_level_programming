#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - state numbers followed by new line
 * @separator: printed string (between the numbers)
 * @n: num of int
 * if the separator is null, dont print
 * return: new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list;

	va_start(list, n);

	for (x = 0; x < n; x++)
	{
		if (!separator)
			printf("%d", va_arg(list, int));
		else if (separator && x == 0)
			printf("%d", va_arg(list, int));
		else
			printf("%s%d", separator, va_arg(list, int));
	}

	va_end(list);

	printf("\n");
}
