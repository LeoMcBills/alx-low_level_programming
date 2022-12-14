#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int num, total;

	while (num < 1024)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			total = total + num;
		}
		num++;
	}
	printf("%d\n", total);
	return (0);
}
