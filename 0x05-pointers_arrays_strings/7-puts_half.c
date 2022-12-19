#include "main.h"

/**
 * puts_half - main func
 * @str: arg 1
 *
 * Description: will print the other half of the string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int p = 0;
	int k;

	while (str[p] != '\0')
	{
		p++;
	}
	if (p % 2 == 0)
	{
		k = p / 2;
		for (; k < p; k++)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
	}
	else
	{
		k = (p + 1) / 2;
		for (; k < p; k++)
		{
			_putchar(str[k]);
		}
		_putchar('\n');
	}
}
