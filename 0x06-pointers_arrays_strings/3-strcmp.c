#include "main.h"

/**
 * _strcmp - main func
 * @s1: first string
 * @s2: second string
 * Description: this function will compare strings
 * Return: integer value
 */


int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
