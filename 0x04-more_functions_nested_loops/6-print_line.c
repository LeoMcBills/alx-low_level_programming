#include "main.h"
/**
 * print_line - Prints line in terminal
 * @n: The argument passed to the function is of integer type
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
