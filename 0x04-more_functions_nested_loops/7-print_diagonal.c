#include "main.h"
#include <unistd.h>

/**
 * print_diagonal - main func
 * @n: integer
 * Description: to print diagonals
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int p;
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 0; l <= n; l++)
		{

			while (p < n)
			{
				p = 0;
				if ((p + 1) == 1)
				{
					_putchar('\\');
					_putchar('\n');
					p++;
				}
				else
				{
					_putchar(' ');
					p++;
				}
			}
		}

	}
}
