#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size : size
 * @c : character
 *
 * Return: a pointer to the array, or NULL if it fails
 *
 */

char *create_array(unsigned int size, char c)
{
	char *ar;

	ar = malloc(size);
	if (ar == 0 || size == 0)
	{
		return (NULL);
	}

	while (size--)
	{
		ar[size] = c;
	}
	return (ar);
}
