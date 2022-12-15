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
		
			for (; p < n; p++)
			{	
				if (p == 0)
				{	
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}	
			}
		}

		_putchar('\n');
	}
}
