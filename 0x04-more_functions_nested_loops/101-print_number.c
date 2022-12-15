#include "main.h"
/**
 * print_number - prints integer number
 * @n: The argument passed to the function is of integer type
 */

void print_number(int n)
{
	unsigned int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((n / 10) > 0)
		print_num(x / 10);
	_putchar((x % 10) + '0');
}
