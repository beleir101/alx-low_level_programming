#include "main.h"

/**
 * _print_rev_recursion - main func
 * @s: string to be reversed
 * Description: this will reverse a string
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
