#include "main.h"

/**
 * get_endianness - validate endianness
 * Return: 0 if big endian, else 1 for little endian
 */
int get_endianness(void)
{
	int data;

	data = 1;
	if (*(char *)&data == 1)
		return (1);
	else
		return (0);
}
