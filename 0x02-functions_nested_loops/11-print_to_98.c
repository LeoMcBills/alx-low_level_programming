#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98 from n
 * @n: argument is of type integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
}
