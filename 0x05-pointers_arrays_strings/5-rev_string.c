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
	int f;
	char pri[f];

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	f = i;
	while (i >= 0)
	{
		pri[p++] = s[i];
		i--;
	}
	s = pri;
}
