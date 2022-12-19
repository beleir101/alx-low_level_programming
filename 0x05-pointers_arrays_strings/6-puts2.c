#include "main.h"

/**
 * puts2 - main func
 * @str: string
 *
 * Description: Best functipn
 * Return: Nothing
 */

void puts2(char *str)
{
	int len = 0;
	int u = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (; u <= len; u += 2)
	{
		_putchar(str[u]);
	}
	_putchar('\n');
}
