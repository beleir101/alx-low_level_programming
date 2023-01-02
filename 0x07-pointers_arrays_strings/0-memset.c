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
	int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (p);
}
