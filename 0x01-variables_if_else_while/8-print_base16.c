#include <stdio.h>

/**
 * main - Function  prints all the numbers of base 16 in lowercase, followed by a new line
 *
 * Return: Return 0 (when check is complete)
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i < 58; i++)
	{

		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
