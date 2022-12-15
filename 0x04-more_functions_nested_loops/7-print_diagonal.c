#include "main.h"
/**
 * print_diagonal - prints a diagonal line in terminal
 * @n: argument passed to the function is of integer type
 */

void print_diagonal(int n)
{
	int x = 0, y = 0;

	if (n > 0)
	{
		while (x < n)
		{
			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
			y = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
