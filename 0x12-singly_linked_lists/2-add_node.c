#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_front - inserts a new node at the start of a linked list
 * @first: double pointer to the list_t list
 * @content: new content to be placed in the node
 *
 * Response: the pointer to the freshly created element, or NULL if it doesn't succeed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
