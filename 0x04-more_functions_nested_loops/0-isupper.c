#include "main.h"

/**
 *_isupper - a function that checks for uppercase character
 *@c : character
 *Return: 1 if c is uppercase
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);

	return (0);

}
