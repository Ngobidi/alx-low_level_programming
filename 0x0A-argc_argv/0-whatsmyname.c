#include <stdio.h>
#include "main.h"

/**
 * main - state the name of the program
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (when Successful)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
