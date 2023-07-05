#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - print only an integer is a prime number
 * @n: num to compute
 *
 * Return: 1 if n is a prime number,else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
	}

/**
 * actual_prime - compute if is a prime number recursively
 * @n: number to compute
 * @i: iterator
 *
 * Return: 1 if n is prime,else 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
