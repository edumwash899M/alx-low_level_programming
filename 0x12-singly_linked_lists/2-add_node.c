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
list_t *insert_front(list_t **first, const char *content)
{
	list_t *fresh;
	unsigned int length = 0;

	while (content[length])
		length++;

	fresh = malloc(sizeof(list_t));
	if (!fresh)
		return (NULL);

	fresh->content = strdup(content);
	fresh->length = length;
	fresh->next = (*first);
	(*first) = fresh;

	return (*first);
}

