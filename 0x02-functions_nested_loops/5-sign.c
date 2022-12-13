#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: takes an integer as an argument
 * Return: 1 for positive, 0 for zero and -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		_putchar(44);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		_putchar(44);
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(44);
		return (-1);
	}
}
