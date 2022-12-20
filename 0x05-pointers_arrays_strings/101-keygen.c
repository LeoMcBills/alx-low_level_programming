#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i = 0, randn = 0, x = 0;
	char str[100];

	srand (time(NULL));

	for (i = 0; x <= 2644; i++)
	{
		randn = (rand() % 25) + 65;

		str[i] = randn;
		x += randn;
	}
	str[i++] = 2772 - x;
	str[i++] = '\0';

	printf("%s\n", str);
	return (0);
}
