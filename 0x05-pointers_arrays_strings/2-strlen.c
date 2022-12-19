#include "main.h"
/**
 * _strlen - counts characters in a string
 * @s: Pointer variable of character type
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
