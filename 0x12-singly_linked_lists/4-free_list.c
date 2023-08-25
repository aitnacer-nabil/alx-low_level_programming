#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - void free_list(list_t *head)
 *@head : elements of a list_t
 *
 *Return:  the address of the new element, or NULL if it failed
 */

void free_list(list_t *head)
{

	list_t *current = head;

	while (current != NULL)
	{
		list_t *temp = current;

		current = current->next;
		free(temp->str);
		free(temp);
	}
}
