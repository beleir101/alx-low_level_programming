#include "main.h"

/**
 * _puts - main func
 * @str: string to pe displayed
 *
 * Description: This function will display a string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int thing = 0;

	while (str[thing] != '\0')
	{
		_putchar(str[thing]);
		thing++;
	}
	_putchar('\n');
}
