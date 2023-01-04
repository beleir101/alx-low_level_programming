#include "main.h"

/**
 * _puts_recursion - main func
 * @s: string to be printed
 * Description: will print a string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s != 0)
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
	else
		_putchar('\n');
}
