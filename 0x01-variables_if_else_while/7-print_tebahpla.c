#include <stdio.h>

/**
 * main - Function  prints the lowercase alphabet in reverse
 *
 * Return: Return 0 (if check is completed)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
