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
	int num = 0;
	int end;

	while (*s != 0)
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
		accept = start;
		if (end == 0)
			break;
	}
	return (num);

}

