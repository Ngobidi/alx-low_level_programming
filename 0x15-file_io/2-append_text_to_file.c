#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * append_text_to_file - Append_text
 * main - check the code
 *
 * Return: 1 on success and -1 on failure.
 * or If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, lens);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}
