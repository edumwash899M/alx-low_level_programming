#include <stdlib.h>
#include "lists.h"


/**
 * release_list - deallocate memory used by a linked list
 * @start: list_t instance to be deallocated
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

