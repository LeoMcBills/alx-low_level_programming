#include "main.h"
/**
 * print_times_table - prints n times table starting with 0
 * @n: argument taken is of integer type
 */

void print_times_table(int n)
{
	int a, b, c, x, y, z;

	a = 0;
	if (n >= 0 && n <= 15)
	{
		while (a <= n)
		{
			b = 0;
			while (b <= n)
			{
				c = a * b;
				x = c % 10;
				y = c % 100 / 10;
				z = c / 100;
				if (z == 0 && b != 0)
				{
					_putchar(' ');
					if (y == 0)
						_putchar(' ');
					else
						_putchar(y + '0');
				}
				else if (z != 0)
				{
					_putchar(z + '0');
					_putchar(y + '0');
				}
				_putchar(x + '0');
				if (b != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				b++;
			}
			_putchar('\n');
			a++;
		}
	}
}
