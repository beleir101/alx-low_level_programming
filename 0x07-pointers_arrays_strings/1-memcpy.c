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
	int i = 0;

	for (; i <= n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
