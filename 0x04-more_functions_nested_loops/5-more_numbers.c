#include "main.h"
#include <unistd.h>

/**
 * more_numbers - main func
 *
 * Description: prints number from 0-9
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int k;
	int p;

	for (p = '0'; p <= '9'; p++)
	{
		for (k = '0'; k <= '14'; k++)
		{
			if (k < 9)
			{
				_putchar(k / 10 + '0');
			}
			else
			{
				_putchar(k);
			}
		}
		_putchar('\n');
	}
	_putchar('\n');

}
