#include "main.h"

/**
 * sqrt2 - evaluating from 1 to n
 * @x: equals n
 * @y: iterates from 1 to n
 * Return: On success 1
 */

int sqrt2(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	if (y * y > x)
	{
		return (-1);
	}
	return (sqrt2(x, y + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose naturl square root is to be determined
 * Return: -1 if n has no natural sqaure root
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
