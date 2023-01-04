#include "main.h"

/**
 * prime1 - for eqaluation from 1 to n
 * @x: equal to n
 * @y: iterates 1 to n
 * Return: On success 1
 */

int prime1(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (prime1(x, y + 1));
}

/**
 * is_prime_number - return 1 if prime number
 * @n: number
 * Return: On success 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime1(n, 2));
}
