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
	char *begin = src, *dust = dest;
	int i = 0, c = 0;

	while (*src != 0)
	{

		i++;
		src++;
	}
	src = begin;
	while (*src != 0)
	{
		while (c < i)
		{
			if (c > n)
			{
				break;
			}
			else
			{
				*dest++ = *src++;
				c++;
			}
		}
	}
	return (dust);
}
