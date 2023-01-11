#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of size and assign a char
 * @size: char assign
 * @c: char to assign
 * Return: pointer to array and NULL if fail.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
