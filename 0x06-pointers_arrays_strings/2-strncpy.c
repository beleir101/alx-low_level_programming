#include "main.h"

/**
 * _strncpy - main func
 * @dest: destination
 * @src: source
 * @n: integer specifying the bytes
 * Description: This will copy string from the source
 * Return: always pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
