#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_end_node - appends a new node at the end of a linked list
 * @start_ptr: double pointer to the beginning of the list_t list
 * @content: content to place in the new node
 *
 * Result: returns the memory location of the new element, or NULL upon failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

