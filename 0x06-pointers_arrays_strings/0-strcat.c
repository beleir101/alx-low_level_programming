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
	int c, k = (0, 0);
	while (*(dest + c) != 0)
	{
		c++;
	}
	while (*(src + k) != 0)
	{
		*(dest + c + 1 + k) = *(src + k);
		k++;
	}
	return (dest);
}
