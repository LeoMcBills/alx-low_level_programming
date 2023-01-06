#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character
 * x - argument should be a character
 * Return: success 1
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
