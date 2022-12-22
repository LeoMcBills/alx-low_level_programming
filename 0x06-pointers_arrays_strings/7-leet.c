#include "main.h"
/**
 * leet - encodes a string
 * @str: Parameter of string to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i = 0, j;

	char leet[9] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T', '\n'};

	while (str[++i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
			{
				str[i] = j + '0';
			}
		}
	}
	return (str);
}
