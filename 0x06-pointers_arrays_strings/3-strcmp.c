#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: First parameter
 * @s2: Second parameter
 * Return: compared string
 */

int _strcmp(char *s1, char *s2)
{
	int n = 0, diff = 0;

	while (1)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
		{
			break;
		}
		else if (s1[n] == '\0')
		{
			diff = s2[n];
			break;
		}
		else if (s2[n] == '\0')
		{
			diff = s1[n];
			break;
		}
		else if (s1[n] != s2[n])
		{
			diff = s1[n] - s2[n];
			break;
		}
		else
		{
			i++;
		}
	}
	return (diff);
}
