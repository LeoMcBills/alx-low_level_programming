#include "main.h"
/**
 * print_square - prints a square in terminal followed by a new line
 * @size: argument passed to the function is of integer type
 */

void print_square(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 0; inc1 < size; inc1++)
		{
			for (inc2 = 0; inc2 < (size - 1); inc2++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
