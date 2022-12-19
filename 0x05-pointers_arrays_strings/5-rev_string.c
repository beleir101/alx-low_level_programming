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
	char pan;

	while (s[i] != '\0')
	{
		i++;
	}
	while (p < i--)
	{
		pan = s[p];
		s[p++] = s[i];
		s[i] = pan;
	}
}
