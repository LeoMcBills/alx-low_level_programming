#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print array element each for a line
 * @array: array whose elements are to be printed
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
