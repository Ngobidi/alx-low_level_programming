#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

char *create_buffer(char *cash);
void close_file(int pd);

/**
 * create_buffs - 1024_bytes
 * main - check the code
 *
 * Return: to buffs
 */
char *create_buffs(char *cash)
{
	char *buffs;

	buffs = malloc(sizeof(char) * 1024);

	if (buffs == NULL)
	{
		dprintf(STDERR_FILENO,
			"Errors: Can_not_write to %s\n", cash);
		exit(99);
	}

	return (buffs);
}

/**
 * close_file - cash
 * main - check the code
 *
 * Return: Always close.
 */
void close_cash(int pd)
{
	int a;

	a = close(pd);

	if (a == -1)
	{
		dprintf(STDERR_FILENO, "Errors: Can_not_closes_pd %d\n", pd);
		exit(99);
	}
}

/**
 * main - check the code
 *
 * Return: Always 0, when check over
 */
int main(int argc, char *argv[])
{
	int pd, be, x, y;
	char *buffs;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usages: cp cash_pd_to\n");
		exit(97);
	}

	buffs = create_buffs(argv[2]);
	pd = open(argv[1], O_RDONLY);
	x = read(pd, buffs, 1024);
	be = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (pd == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Errors: Can_not_read_pd_cash %s\n", argv[1]);
			free(buffs);
			exit(98);
		}

		y = write(be, buffs, x);
		if (be == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffs);
			exit(99);
		}

		x = read(pd, buffs, 1024);
		be = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(buffs);
	close_cash(pd);
	close_cash(be);

	return (0);
}
