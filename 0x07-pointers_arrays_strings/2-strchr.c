#include "main.h"

/**
 * _strchr - main func
 * @s: string
 * @c: character
 * Description: finding a character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	char *p = s, *j;
	int i = 0, k = 0, z = 0;

	while (s[i] != 0)
	{
		i++;
	}
	i--;
	s = p;
	while (k <= i)
	{
		if (*(s + k) == c)
		{
			j = (s + k);
			break;
		}
	k++;
	}

	return (j);
}
