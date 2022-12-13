#include "main.h"
/**
 * _isalpha - checks for an alphabet
 * @c: takes the argument
 * Return: 1 for alphabet and 0 for none
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
