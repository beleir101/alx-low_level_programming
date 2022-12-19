#include "main.h"

/**
 * _puts - main func
 * @s: string to pe displayed
 *
 * Description: This function will display a string
 *
 * Return: Nothing
 */

void _puts(char *s)
{
	int thing = 0;

	while (s[thing] != '\0')
	{
		_putchar(s[thing]);
		thing++;
	}
	_putchar('\n');
}
