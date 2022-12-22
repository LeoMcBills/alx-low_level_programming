#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, i = 0;

	while (dest[index++])
		i++;

	for (index = 0; src[index]; index++)
	{
		dest[i++] = src[index];
	}

	return (dest);
}
