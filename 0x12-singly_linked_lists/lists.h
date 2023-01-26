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
#endif
