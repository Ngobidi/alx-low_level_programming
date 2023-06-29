#include "main.h"
#include <stdio.h>
/**
 * print_line - write a s bytes of a buffer
 * @c: buffer to write
 * @s: bytes of buffer to write
 * @l: line of buffer to write
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
int x, y;
for (x = 0; x <= 9; x++)
{
if (x <= s)
printf("%02x", c[l * 10 + x]);
else
printf("  ");
if (x % 2)
putchar(' ');
}
for (y = 0; y <= s; y++)
{
if (c[l * 10 + y] > 31 && c[l * 10 + y] < 127)
putchar(c[l * 10 + y]);
else
putchar('.');
}
}

/**
 * print_buffer - write a buffer
 * @b: buffer to write
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int z;
for (z = 0; z <= (size - 1) / 10 && size; z++)
{
printf("%08x: ", z * 10);
if (z < size / 10)
{
print_line(b, 9, z);
}
else
{
print_line(b, size % 10 - 1, z);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
