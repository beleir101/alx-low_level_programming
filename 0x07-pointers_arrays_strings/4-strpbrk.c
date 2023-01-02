#include "main.h"

/**
 * _strpbrk - main func
 * @s: first argument
 * @accept: second argument
 * Description: will search for a string
 * Return: either pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
