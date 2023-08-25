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
list_t *insert_end_node(list_t **start_ptr, const char *content)
{
    list_t *new_node;
    list_t *temp_node = *start_ptr;
    unsigned int content_length = 0;

    while (content[content_length])
        content_length++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(content);
    new_node->len = content_length;
    new_node->next = NULL;

    if (*start_ptr == NULL)
    {
        *start_ptr = new_node;
        return (new_node);
    }

    while (temp_node->next)
        temp_node = temp_node->next;

    temp_node->next = new_node;

    return (new_node);
}

