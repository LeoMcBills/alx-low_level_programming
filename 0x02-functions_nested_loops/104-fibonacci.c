#include <stdio.h>
/**
 * main - prints first 98 Fibonacci
 * Return: Always 0
 */

int main(void)
{
	long int a, b, c, x, y, z, n, m, nm, total;

	a = 0;
	b = 1;
	total = 0;
	for (c = 0; c < 91; c++)
	{
		total = a + b;
		printf("%ld", total);
		if (c != 97)
		{
			printf(", ");
		}
		a = b;
		b = total;
	}
	x = a / 1000000000;
	y = a % 1000000000;
	z = b / 1000000000;
	n = b % 1000000000;
	while (c < 98)
	{
		m = x + z;
		nm = y + n;
		if (nm >= 1000000000)
		{
			nm %= 1000000000;
			m++;
		}
		printf("%ld%ld", m, nm);
		if (c == 97)
			break;
		printf(", ");
		x = z;
		y = n;
		z = m;
		n = nm;
		c++;
	}
	printf("\n");
	return (0);
}
