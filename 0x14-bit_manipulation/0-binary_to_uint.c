#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * binary_to_uint - binary number conversion
 * main - check the code
 *
 * @b: towards string of 0 and 1 chars
 * Return: converted numbers or 0, null
 * if b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int group_data, study_data;
	int file1;

	if (b == NULL)
		return (0);
	for (file1 = 0; b[file1]; file1++)
	{
		if (b[file1] != '0' && b[file1] != '1')
			return (0);
	}

	for (study_data = 1, group_data = 0, file1--;
			file1 >= 0; file1--, study_data *= 2)
	{
		if (b[file1] == '1')
			group_data += study_data;
	}

	return (group_data);
}
