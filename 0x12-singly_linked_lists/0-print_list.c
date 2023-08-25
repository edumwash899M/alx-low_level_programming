#include <stdio.h>
#include "linked_lists.h"

/**
 * display_linked_list - displays all elements in a linked list
 * @list: pointer to the linked_list_t list to display
 *
 * Returns: the count of printed nodes
 */
size_t display_linked_list(const linked_list_t *list)
{
    size_t count = 0;

    while (list)
    {
        if (!list->data)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", list->length, list->data);
        list = list->next;
        count++;
    }

    return count;
}

