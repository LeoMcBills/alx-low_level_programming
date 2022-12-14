#include <stdio.h>
/**
 * main - sum of even valued fibonacci
 * Return: 0
 */

int main(void)
{
	long int total, x, y, z;

	x = 0;
	total = 0;
	y = 1;
	z = 0;

	while (total < 4000000)
	{
		total = x + y;
		if ((total % 2) == 0)
		{
			z = z + total;
		}
		x = y;
		y = total;
	}
	printf("%ld\n", z);
	return (0);
}
