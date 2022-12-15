#include "main.h"
/**
 * print_line - Prints line in terminal
 * @n: The argument passed to the function is of integer type
 */

void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m <= n)
		{
			_putchar('_');
			m++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
