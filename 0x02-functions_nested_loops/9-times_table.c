#include "main.h"

/**
 * times_table - checks from main
 * Description: prints out the time table
 *
 * Return: nothing
 */


void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			_putchar("%d, ", c);
		}
		_putchar('\n');
	}
}
