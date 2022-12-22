#include "main.h"

/**
 * _strcat - mainfubc
 * @dest: first array of strings
 * @src: anonther string
 *
 * Description: This will work the work of strcat
 * Return: pointer of characters
 */

char *_strcat(char *dest, char *src)
{
	char *lis;

	lis = dest;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest++ = *src++;
	}

	return (lis);
}
