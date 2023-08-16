#include <stdio.h>
#include "dog.h"

/**
 * print_dog : a function that prints a struct dog
 * @d : pointer to dog struct
 * Description a function that prints a struct dog
 * Return: void
 *
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == nul)
		{
			d->name = "(nil)";
		}
		if (d->owner == null)
		{
			d->owner = "(nil)";
		}

		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
