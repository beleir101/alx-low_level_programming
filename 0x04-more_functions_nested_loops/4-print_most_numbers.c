#include "main.h"
#include <unistd.h>

/**
 * print_most_numbers - main func
 *
 * Description: prints number from 0-9
 *
 * Return: Nothing
 */

void print_most_numbers(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	{
		if (k == '2' || k == '4')
		{
			continue;
		}
		_putchar(k);
	}
	_putchar('\n');

}
