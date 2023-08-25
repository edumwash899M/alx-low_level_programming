#include <stdio.h>
#include "lists.h"

/**
 * display_linked_list - displays all elements in a linked list
 * @list: pointer to the linked_list_t list to display
 *
 * Returns: the count of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);


}
