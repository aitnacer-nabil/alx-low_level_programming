#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator : the string to be printed between numbers
 * @n :  the number of integers passed to the function
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	if (separator == NULL || n == 0)
	{
		return;
	}

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		/* code */
		printf("%s%d", i != 0 && separator != NULL ? separator : "", va_arg(arg, int));
	}
	printf("\n");
	va_end(arg);

}
