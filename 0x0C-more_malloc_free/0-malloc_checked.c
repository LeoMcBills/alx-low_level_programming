#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory
 * @b: parameter
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr_b;

	ptr_b = malloc(b);
	if (ptr_b == NULL)
		exit(98);
	return (ptr_b);
}
