#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);


#define BUFFER_SIZE 1024

/**
 * main - dublicates the content of a files
 * @argc: pointer argument
 * @argv: pointer arras to the argument.
 *
 * Return: 0 on successful
 * exit code 97 if incorrect arguments, 98 if do not exist or unreadable
 * exit code 99 if can't be creates or writes, 100 can't close
 */
int main(int argc, char *argv[])
{
	int begin, route, y, z;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	begin = open(argv[1], O_RDONLY);
	y = read(begin, buffer, 1024);
	route = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (begin == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: unreadable from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		z = write(route, buffer, y);
		if (route == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: unwriteable to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		y = read(begin, buffer, 1024);
		route = open(argv[2], O_WRONLY | O_APPEND);

	} while (y > 0);

	free(buffer);
	close_file(begin);
	close_file(route);

	return (0);
}

/**
 * close_file - shut files descriptor.
 * @fd: file_descriptor to be shut.
 */
void close_file(int fd)
{
	int result = close(fd);

	if (result == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cannot close_file%d\n", fd);
	exit(100);
    }
}

/**
 * create_buffer - Assigned 1024 bytes to buffers.
 * @file: buffer filename
 *
 * Return: A pointer to the assigned  buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	do {
	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
	dprintf(STDERR_FILENO, "Error: memory allocation failed %s\n", file);
	exit(99);
	}
	} while (0);

	return (buffer);
}
