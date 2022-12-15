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
	int p = 0;
	int l;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{	
		for (l = 1; l <= n; l++)
		{
		
			while (p < n)
			{	
				if (p == 0)
				{	
					_putchar('\\');
					p++
				}
				else
				{
					_putchar(' ');
					p++
				}	
			}
		}

		_putchar('\n');
	}
}
