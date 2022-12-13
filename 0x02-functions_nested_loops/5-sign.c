#include "main.h"
#include <unistd.h>

/**
 * print_sign - check code
 * @n: An output number
 *
 * Description: To print number 0 and -1
 *
 * Return: 1 on success
 */

int print_sign(int n)
{
	int v;

	if (n > 0)
	{
		v = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		v = 0;
		_putchar('0');
	}
	else
	{
		v = -1;
		_putchar('-');
	}

	return (v);
}
