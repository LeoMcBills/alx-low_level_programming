#include "main.h"
/**
 * leet - encodes a string
 * @str: Parameter of string to be encoded
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i = 0, j;

	char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char upper[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char num[] = {'4', '3', '0', '7', '1', '\0'};

	for (; str[i] != '\0'; ++i)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
