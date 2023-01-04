#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: string whose length is to be returned
 * Return: 0 for success
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
