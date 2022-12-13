#include "main.h"
/**
 * times_table - prints the 9 times table startimg with a zero
 */

void times_table(void)
{
	int a, b;

	a = b = 0;
	while (a <= 9)
	{
		b =  0;
		while (b <= 9)
		{
			if ((a * b) < 10)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar((a * b) + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
				if (b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
