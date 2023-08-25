#ifndef CUSTOM_LISTS
#define CUSTOM_LISTS

/**
 * struct custom_list_node - node for a singly linked list
 * @str: dynamically allocated string
 * @length: length of the string
 * @next_node: pointer to the next node
 *
 * Description: node structure for a singly linked list
 * used in the context of a project
 */
typedef struct custom_list_node
{
    char *str;
    unsigned int length;
    struct custom_list_node *next_node;
} custom_list_t;

size_t print_custom_list(const custom_list_t *node);
size_t custom_list_length(const custom_list_t *node);
custom_list_t *add_custom_node(custom_list_t **head, const char *string);
custom_list_t *add_custom_node_end(custom_list_t **head, const char *string);
void free_custom_list(custom_list_t *head);

#endif

