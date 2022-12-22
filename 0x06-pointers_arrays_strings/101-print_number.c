#include "main.h"
/**
 * print_number - prints integer
 * @n: parameter of type integer
 */

void print_number(int n)
{
	unsigned int number;

	number = n;
	if (n < 0)
	{
		_putchar('_');
		number = -n;
	}

	if ((number / 10) > 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
