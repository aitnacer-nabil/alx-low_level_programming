#include "main.h"

/**
 * puts2  - prints every other character of a string
 * @str : character param
 *
 * Return:  VOID.
 */

void  puts2(char *str)
{
	int i;
	i = 0;

	while (*str++)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
