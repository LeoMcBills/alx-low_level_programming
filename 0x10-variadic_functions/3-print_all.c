#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *str = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", str, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", str, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", str, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", str, string);
					break;
				default:
					i++;
					continue;
			}
			str = ",";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
