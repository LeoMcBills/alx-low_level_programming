#include "main.h"
/**
 * print_to_98 - prints all natural numbers to 98 from n
 * @n: argument is of type integer
 */

void print_to_98(int n)
{
	int x;

	for (x = n; x <= 98; x++)
	{
		_putchar(x + '0');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
