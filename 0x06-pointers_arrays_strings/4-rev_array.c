#include "main.h"
/**
 * reverse_array - Reverses elements of an array
 * @a: first parameters
 * @n: second parameters
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		temp = a[n -1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
