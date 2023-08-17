#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			/* code */
			switch (format[i])
			{
				case 'c':
						printf("%s%c", sep, va_arg(args, int));
						break;
				case 'i':
						printf("%s%d", sep, va_arg(args, int));
						break;
				case 'f':
						printf("%s%f", sep, va_arg(args, double));
						break;
				case 's':
						str = va_arg(args, char *);
						printf("%s%s", sep, (str == NULL) ? "(nil)" : str);
						break;
				default:
						i++;
						continue;
			}

			sep = ", ";
			i++;
		}

	}

	printf("\n");
	va_end(args);
}
