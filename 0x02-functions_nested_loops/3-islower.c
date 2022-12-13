#include "main.h"
/**
 * _islower - detects a lowercase character
 * Return: 1 for lowercase and 0 for else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
