#include "main.h"

/**
 * _strncat - main func
 * @dest: destination
 * @src: source
 * @n: number of bytes
 *
 * Description: will concatenate until n
 * Return: always pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *conc;
	int i = 0;

	conc = dest;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		if (i >= n)
		{
			break;
		}
		else
		{
			i++;
			*dest++ = *src++;
		}
	}

	return (conc);
}
