#include "main.h"

/**
 * _strspn - main func
 * @s: first argument
 * @accept: second argument
 *
 * Description: will count bytes
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	char *begin = accept;
	int num = 0, end;

	while (*s)
	{
		end = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				num++;
				end = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = begin;
		if (end == 0)
			break;
	}
	return (num);

}

