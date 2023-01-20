include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *spa = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spa, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", spa, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", spa, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", spa, str);
					break;
				default:
					i++;
					continue;
			}
			spa = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
