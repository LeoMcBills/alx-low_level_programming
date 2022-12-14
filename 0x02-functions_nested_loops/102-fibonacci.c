#include <stdio.h>
/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	long int total, x, y, z;

	x = 0;
	y = 1;
	z = 0;
	total = 0;
	while (z < 50)
	{
		total = x + y;
		printf("%ld", total);
		if (z != 49)
		{
			printf(", ");
		}
		x = y;
		y = total;
		z++;
	}
	printf("\n");
	return (0);
}
