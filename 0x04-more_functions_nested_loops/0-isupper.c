#include "main.h"
/**
 * _isupper - checks for uppercase alphabetical letter
 * @c: passes in an argument of datatype integer
 * Return: 1 for uppercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
