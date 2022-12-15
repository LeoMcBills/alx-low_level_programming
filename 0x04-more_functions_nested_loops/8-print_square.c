#include "main.h"
/**
 * print_square - prints a square in terminal followed by a new line
 * @size: argument passed to the function is of integer type
 */

void print_square(int size)
{
	int x = 0i, y = 0;

	if (size > 0)
	{
		while (x < size)
		{
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			y = 0;
			x++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
