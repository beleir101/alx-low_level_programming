#include "main.h"

/**
 * _isalpha - checks code
 * @c: character argument
 *
 * Description: checks if its alpha or not
 *
 * Return: always 1 on success
 */

int _isalpha(int c)
{
	char a, d;
	int r = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (d = 'A'; d <= 'Z'; d++)
		{
			if (c == a || c == d)
			{
				r = 1;
			}
		}
	}

	return (r);
}
