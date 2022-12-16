#include "main.h"
/**
 * print_number - prints integer number
 * @n: The argument passed to the function is of integer type
 */

void print_number(int n)
{
	signed int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x > 9)
	{
		print_number(x / 10);
	}
	_putchar(x % 10 + '0');
}
