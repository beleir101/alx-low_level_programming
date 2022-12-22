#include "main.h"

/**
 * string_toupper - main func
 * @s: argument
 *
 * Description: this function will change everything to uppercase
 * Return: pointer value
 */


char *string_toupper(char *s)
{
	char *now = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (now);
}
