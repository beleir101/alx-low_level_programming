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
	char a;
	int r = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (c == a)
		{
			r = 1;
		}
		else 
		{
			for (a = 'A'; a <= 'Z'; a++)
			{
				if (c == a)
				{
					r = 1;
				}
			}
		}
	}

	return (r);
}
