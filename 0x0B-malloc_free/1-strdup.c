#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - main func
 * @str: string to be copied
 * Description: copies
 * Return: NULL or pointer
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;

	p = malloc(sizeof(char) * 1024);

	if (p == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (; i < 1024; i++)
	{
		if (*(str + i) == '\0')
			break;
		*(p + i) = *(s + i)
	}

	return (p);
}
