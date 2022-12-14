#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - main func
 * @size: size of allocation
 * @c: intialization
 *
 * Description: allocation
 * Return: NULL or array
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (; i < size; i++)
	{
		p[i] = c;
	}
	return (p);

}
