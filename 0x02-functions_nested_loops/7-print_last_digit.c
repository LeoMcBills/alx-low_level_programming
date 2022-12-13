#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @x: An argument of type integer is taken
 * Return: Last digit of a number
 */

int print_last_digit(int x)
{
	int z, y = x % 10;

	z = _putchar('0' + y);
	return (z);
}
