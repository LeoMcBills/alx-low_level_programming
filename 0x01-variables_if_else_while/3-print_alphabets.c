#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (successful)
 */

int main(void)
{
	char u, l;

	u = 'A';
	l = 'a';
	while (u <= 'Z')
	{
		putchar(u);
		u++;
	}
	while (l <= 'z')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
