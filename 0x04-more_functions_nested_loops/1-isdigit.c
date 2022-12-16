#include "main.h"
/**
 * _isdigit - Checks for whether the argument passed to it is a digit or not
 * @c: the argument passed to it should be of integer type
 * Return: 1 for digit and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
