#include "main.h"

/**
 * _isdigit - code checker
 * @c: integer to be checked
 * Description: to chekc
 *
 * Return: 0
 */

int _isdigit(int c)
{
	int p, d = 0;

	for (d = 0; d <= 9; d++)
	{
		if (c == d)
		{
			p = 1;
		}
	}

	return (p);