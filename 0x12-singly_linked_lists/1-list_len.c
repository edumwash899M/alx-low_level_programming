#include <stdlib.h>
#include "lists.h"

/**
 * count_elements - calculates the count of items in a linked list
 * @head: pointer to the list_t list
 *
 * Returns: count of items in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

