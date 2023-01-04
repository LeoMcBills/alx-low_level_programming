#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: number whose factorial is to be found
 *
 * Return: -1 if n is lower than 0 and return 1 if 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
