#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0;
 */

int main(void)
{
	int num;
	char *wrd = "FizzBuzz", *wrd1 = "Fizz", *wrd2 = "Buzz";

	for (num = 1; num <= 100; num++)
	{
		if ((num % 15) == 0)
		{
			printf("%s", wrd);
		}
		else if ((num % 3) == 0)
		{
			printf("%s", wrd1);
		}
		else if ((num % 5) == 0)
		{
			printf("%s", wrd2);
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
