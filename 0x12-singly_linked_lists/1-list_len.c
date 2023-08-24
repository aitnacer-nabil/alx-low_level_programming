#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len -  a function that returns the number of elements in a linkedlist
 *@h : elements of a list_t
 *
 *Return:  the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
