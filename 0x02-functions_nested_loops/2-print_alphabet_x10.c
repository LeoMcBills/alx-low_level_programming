#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times then a new line
 */

void print_alphabet_x10(void)
{
	int num;

	char ch;

	for (num = 0; num <= 9; num++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
