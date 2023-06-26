#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function that generates random valid password
 * passwords  101-crackme
 *
 * Return: return 0 (after validation)
 */
int main(void)
{
	int pass[100];
	int z, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (z = 0; z < 100; z++)
	{
		pass[z] = rand() % 78;
		sum += (pass[z] + '0');
		putchar(pass[z] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
