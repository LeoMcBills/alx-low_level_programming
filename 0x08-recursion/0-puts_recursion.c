#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: parameter passing the string argument
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
