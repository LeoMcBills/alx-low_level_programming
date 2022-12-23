#include "main.h"
/**
 * cap_string - capitalizes all characters in a string
 * @str: String to be capitalised
 * Return: capitalised string
 */

char *cap_string(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
		{
			str[0] = str[0] - 32;
		}
		if (str[count] == ' ' || str[count] == '\t' || str[count] == '\n'
				|| str[count] == ',' || str[count] == ';' || str[count] == '.'
				|| str[count] == '.' || str[count] == '!' || str[count] == '?'
				|| str[count] == '"' || str[count] == '(' || str[count] == ')'
				|| str[count] == '{' || str[count] == '}')
		{
			if (str[count + 1] >= 97 && str[count + 1] <= 122)
			{
				str[count + 1] = str[count + 1] - 32;
			}
		}
		count++;
	}
	return (str);
}
