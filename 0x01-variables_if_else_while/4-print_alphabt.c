#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function all letter except q and e.
 *
 * Return: print 0 (if check is validated)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
