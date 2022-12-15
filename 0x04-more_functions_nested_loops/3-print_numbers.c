#include "main.h"
#include <unistd.h>

/**
 * print_numbers - main func
 *
 * Description: prints number from 0-9
 *
 * Return: Nothing
 */

void print_numbers(void)
{
	int k;

	for (k = '0'; k <= 9; k++)
	{
		_putchar(k);
	}
	_putchar('\n');

}
