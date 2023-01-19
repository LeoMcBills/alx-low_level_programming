#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Return sum of all its parameters
 * @n: Number of params passed
 * @...: A variable number of parameters
 * Return: sum of all params or O if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int x, sum = 0;

	va_start(ls, n);
	for (x = 0; x < n; x++)
		sum = sum + va_arg(ls, int);
	va_end(ls);
	return (sum);
}
