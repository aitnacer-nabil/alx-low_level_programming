#include "main.h"

/**
 * puts2  - prints every other character of a string
 * @str : character param
 *
 * Return:  VOID.
 */

void  puts2(char *str)
{
	if (*str == '\0')
	{
		_putchar('\0');
	} else
	{
		_putchar(*str);
		puts2(str + 2);
	}
}
