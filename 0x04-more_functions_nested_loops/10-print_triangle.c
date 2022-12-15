#include "main.h"
/**
 * print_triangle - prints a triangle on terminal
 * @size: the argument passed to the function is of integer type
 */

void print_triangle(int size)
{
	int x = 0, y = 0, space;

	if (size > 0)
	{
		while (y < size)
		{
			space = size - y - 1;
			while (x < size)
			{
				if (space > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
