#include "main.h"
/**
 * pal - ontains length of a
 * @a: the string
 * @l: integer to count length
 * Return: On success 1
 */

int pal(char *a, int l)
{
	if (*a == 0)
	{
		return (l - 1);
	}
	return (pal(a + 1, l + 1));
}

/**
 * palind - uses string reverse to compare string
 * @a: string
 * @l: length
 * Return: On success 1
 */

int palind(char *a, int l)
{
	if (*a != *(a + l))
	{
		return (0);
	}
	if (*a == 0)
	{
		return (1);
	}
	return (palind(a + 1, l - 2));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to evaluate
 * Return: On success 1
 */

int is_palindrome(char *s)
{
	int x;

	x = pal(s, 0);
	return (palind(s, x));
}
