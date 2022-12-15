#include "main.h"
/**
 * print_number - prints integer number
 * @n: The argument passed to the function is of integer type
 */

void print_number(int n)
{
	signed int x = n;

	if ((n / 10) > 0)
		print_num(x / 10);
	_putchar((x % 10) + '0');
}
