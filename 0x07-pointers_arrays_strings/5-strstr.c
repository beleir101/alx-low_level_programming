#include "main.h"

/**
 * _strstr - main func
 * @haystack: first argument
 * @needle: secomd argument
 *
 * Description: will do
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
