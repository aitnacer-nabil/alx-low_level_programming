#include "main.h"

/**
 * cap_string -a function that capitalizes all words of a string.
 * @c : string
 *
 * Return: retun c
 */

char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' ||
		c[i] == ',' ||
		c[i] == '.' ||
		c[i] == '!' ||
		c[i] == '?' ||
		c[i] == '"' ||
		c[i] == '(' ||
		c[i] == ')' ||
		c[i] == '{' ||
		c[i] == '}' ||
		i == 0)
		{
			if (i == 0)
			{
				if (c[i] <= 'z' && c[i] >= 'a' && c[i] > 'A')
				{
					c[i] -= 32;
				}
			}

			if (c[i + 1] <= 'z' && c[i + 1] >= 'a' && c[i + 1] > 'A')
			{
				c[i + 1] -= 32;
			}
		}
			i++;
		}
		return (c);
}
