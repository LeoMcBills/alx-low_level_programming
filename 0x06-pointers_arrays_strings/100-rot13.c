#include "main.h"
/**
 * rot13 - encodes a string
 * @str: parameter of a string for encoding
 * Return: str
 */

char *rot13(char *str)
{
	int i, x;

	char m1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char m2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (x = 0; m1[x] != '\0'; x++)
		{
			if (str[i] == m1[x])
			{
				str[i] = m2[x];
				break;
			}
		}
	}
	str[i] = '\0';
	return (str);
}
