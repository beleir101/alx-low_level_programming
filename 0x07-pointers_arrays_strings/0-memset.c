#include "main.h"

/**
 * _memset - main func
 * @s: adress to replace
 * @b: another byte
 * @n: size to be replaced
 *
 * Description: this function will replace specific bytes
 * Return: pointer adress
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (p);
}
