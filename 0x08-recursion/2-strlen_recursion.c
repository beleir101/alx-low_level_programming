#include "main.h"

/**
 * _strlen_recursion - main func
 * @s: string to be counted
 * Description: will calculate the length of a string
 *
 * Return: Integer which is length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != 0)
	{
		i++;
		return(i + _strlen_recursion(s + 1));
	}
	else
		return;
}
