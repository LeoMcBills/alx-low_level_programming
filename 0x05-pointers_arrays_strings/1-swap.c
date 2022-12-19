#include "main.h"
/**
 * swap_int - swaps two values of two integers
 * @a: first number parameter
 * @b: second number pointer variable parameter
 * @c: pointer c
 * Return: None
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
