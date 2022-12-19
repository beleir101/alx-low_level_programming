#include "main.h"

/**
 * rev_string - main func
 * @s: string to be reversed
 *
 * Description: This function will print out reversed string
 * Return: Nothing
 */

void rev_string(char *s)
{
	int i = 0;
	int p = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0 && p <= i)
	{
		s[p] = s[i]
		i--;
		p++;
	}
}
