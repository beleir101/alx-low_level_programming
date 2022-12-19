#include "main.h"

/**
 * print_rev - main func
 * @s: string to be reversed
 *
 * Description: This function will print out reversed string
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
