#include "main.h"
#include <stdio.h>

/**
 * _strchr - main func
 * @s: string
 * @c: character
 * Description: finding a character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
		return (s);

	return (NULL);
}
