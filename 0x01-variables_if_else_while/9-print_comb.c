#include <stdio.h>

/**
 * main - Function prints all possible combinations of single-digit numbers
 *
 * Return: Return 0 (when check is completed)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
