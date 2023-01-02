#include "main.h"

/**
 * _memcpy - main func
 * @dest: destination
 * @src: source
 * @n: int
 *
 * Description: this will copy from destiation
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	int i = 0;

	while (n--)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (p);
}
