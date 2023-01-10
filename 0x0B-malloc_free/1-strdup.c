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
	int i = 0, len;

	while (*str)
		len++;
	len--;
	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	for (; i < 1024; i++)
	{
		if (*(str + i) == '\0')
			break;
		*(p + i) = *(str + i);
	}

	return (p);
}
