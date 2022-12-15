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

	for (p = 0; p < n; p++)
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
	_putchar('\n');
}
