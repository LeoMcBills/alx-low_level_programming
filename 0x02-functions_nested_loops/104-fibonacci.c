#include <stdio.h>
#define MAX 10000000000
/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	unsigned long int x = 0, y = 1, z = 0, l = 2;
	unsigned long int a, b, c;
	int n;

	printf("%lu, %lu, ", y, l);
	for (n = 2; n < 98; n++)
	{
		if (y + l > MAX || z > 0 || x > 0)
		{
			a = (y + l) / MAX;
			b = (y + l) % MAX;
			c = x + z + a;
			x = z, z = c;
			y = l, l = b;
			printf("%lu%010lu", z, l);
		}
		else
		{
			b = y + l;
			y = l, l = b;
			printf("%lu", l);
		}
		if (n != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
