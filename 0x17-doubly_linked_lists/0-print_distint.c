#include "lists.h"
#include "stdio.h"
/**
 *print_dlistint - print elements
 *
 *@h: the list to be printed
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%u\n", h->n);
		i += 1;
		h = h->next;
	}
	return (i);
}
