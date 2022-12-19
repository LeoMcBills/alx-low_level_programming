#include "main.h"
/**
 * rev_string - A function that reverses a string
 * @s: pointer variable of type char
 */

void rev_string(char *s)
{
	char reverse = s[0];
	int x = 0;
	int i;

	while (s[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i++)
	{
		x--;
		reverse = s[i];
		s[i] = s[x];
		s[x] = reverse;
	}
}
