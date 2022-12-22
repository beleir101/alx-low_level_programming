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
	int i = 0, j = 0, k = 0;

	while ((dest[i] != 0) || (src[j] != 0))
	{
		if (dest[i] != 0)
		{
			lis[i] = dest[i];
			i++;
		}
		else if (dest[i] == 0)
		{
			lis[i + j] = src[j];
			j++;
		}
	}
	while (lis[k] != 0)
	{
		dest[k] = lis[k];
		k++;
	}

	return (lis);
}
