#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - main func
 * @separator: char to separate
 * @n: numebr of int
 *
 * Description: prints integers
 * Rerurn: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	if (n == NULL || separator == NULL)
		return;

	va_start(args, n);

	for (; i < n; i++)
	{
		if (i + 1 == n)
			printf(" %d\n", va_arg(args, int));
		else if (i == 0)
			printf("%d", va_arg(args, int));
		else if (i % 2 == 0)
			printf(" %d", va_arg(args, int));
		else if (i % 2 == 1)
			printf("%c", var_arg(args, char))
	}
	va_end(args);

}
