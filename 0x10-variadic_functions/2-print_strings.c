#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings, followed by a new line.
 * @separator : the string to be printed between numbers the strings
 * @n :  the number of strings  passed to the function
 *
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *temp;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(arg, char *);
		/* code */
		printf("%s%s",
		temp == NULL ? "(nil)" : temp,
		i != (n - 1) ?
		separator : "");
	}
	printf("\n");
	va_end(arg);


}
