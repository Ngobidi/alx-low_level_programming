#include <stdio.h>
#include "main.h"

/**
 * main - state the number of arguments passed to the program
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: return 0 (when check is over)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
