#include "main.h"
/**
 * print_number - prints integer
 * @n: parameter of type integer
 */

void print_number(int n)
{
	unsigned int number;

	if (number < 0)
	{
		_putchar('_');
		number = -number;
	}

	if ((number / 10) > 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + '0');
}
