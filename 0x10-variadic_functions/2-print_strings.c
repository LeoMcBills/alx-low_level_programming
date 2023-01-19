#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Display strings followed by a new line
 * @separator: String printed between strings
 * @n: number of strings passed to the func
 * @...: A variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	chat *str_ptr;
	unsigned int i;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		str_ptr = va_arg(str, char *);
		if (str_ptr == NULL)
			printf("(nil)");
		else
			printf("%s", str_ptr);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
