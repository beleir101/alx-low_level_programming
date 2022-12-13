#include "main.h"
#include <unistd.h>

/**
 * _isalpha - checks if its alpha
 * @c: the character to be checked
 *
 * Description: Uses if and for loops
 *
 * Return: 1 in success
 */

int _isalpha(int c)
{
	int k = 0;
	char p;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (c == p)
		{
			k = 1;
		}
		else
			for (p = 'A'; p <= 'Z'; p++)
			{
				if (c == p)
				{
					k = 1;
				}
			}
	}

	return (k);
}
