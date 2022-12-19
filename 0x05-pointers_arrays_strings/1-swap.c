#include "main.h"
/**
 * swap_int - swaps two values of two integers
 * @a: first number parameter
 * @b: second number pointer variable parameter
 * Return: None
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
