#include "main.h"
#include <stdlib.h>
/**
 *jack_bauer - a function that prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *Return: void
 */

void jack_bauer(void)
{
	int a, b, c, d, tmp;

	for (a = 0 ; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
				}
			}
			if (a == 2 && b == 3)
			{
				tmp = 3;
				break;
			}
		}
		if (a == 2 && tmp == 3)
			break;
	}
}
