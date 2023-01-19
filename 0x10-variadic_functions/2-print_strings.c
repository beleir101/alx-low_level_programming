#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - main func
 * @separator: separator char
 * @n: number of int
 *
 * Description: prints string
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *x;
	va_list args;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (; i < n; i++)
	{
		x = va_arg(args, char*);
		if (i + 1 == n)
		{
			if (x == NULL)
			{
				printf("(nil)");
				return;
			}
			printf("%s\n", x);
			return;
		}

		if (x == NULL)
			printf("(nil)");
		printf("%s", x);
		printf("%s", separator);
	}

	va_end(args);
}
