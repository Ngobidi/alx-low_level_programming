#include <stdio.h>
#include "main.h"

/**
 * main - state all arguments it process
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: return 0 (check is over)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
