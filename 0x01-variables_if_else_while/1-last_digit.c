#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (successful)
 */

int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n % 10;

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	if (l < 6 && l != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
