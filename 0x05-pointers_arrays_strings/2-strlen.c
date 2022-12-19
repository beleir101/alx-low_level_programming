#include "main.h"

/**
 * _strlen - main func
 * @s: string to be counted
 *
 * Description: this func wil count lenght of string
 *
 * Return: always 'a'the length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s[a] != '\0')
	{
		a++;
	}

	return (a);
