#include "main.h"
/**
 * reverse_array - Reverses elements of an array
 * @a: first parameters
 * @n: second parameters
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	n -= 1;
	index = 0;
	while (index <= n)
	{
		tmp = a[index];
		a[index++] = a[n];
		a[n--] = tmp;
	}
}
