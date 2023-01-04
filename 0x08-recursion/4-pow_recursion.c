#include "main.h"

/**
 * _pow_recursion - returns a value of a number raised to a given value
 * @x: number whose value is to be returned
 * @y: power to which the return value is raised
 * Return: -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
