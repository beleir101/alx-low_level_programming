#ifndef ART
#define ART
#include <stdlib.h>

/**
 * struct list_s - structure
 * @str: string
 * @len: length
 * @next: next node
 *
 * Description: Described
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_ *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
size_t list_len_recursion(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
