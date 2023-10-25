#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function prints anything
 * @format: function that list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *pep = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", pep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", pep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", pep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", pep, str);
					break;
				default:
					i++;
					continue;
			}
			pep = ", ";
			i++;
		}
	}
}
