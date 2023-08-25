#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node -  a function that adds a new node at the beginning of a list_t
 *@head : elements of a list_t
 *@str : string
 *Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_head = NULL;

	new_head = (list_t *) malloc(sizeof(list_t));

	if (new_head == NULL)
	{
		return (NULL);
	}

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;
	*head = new_head;
	return (*head);

}
