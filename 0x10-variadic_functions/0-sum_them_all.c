#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - main func
 * @n: number of integers
 * Description: adds every param
 *
 * Return: sum of values
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int sum = 0;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);
	for (; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);
	return (sum);
}
