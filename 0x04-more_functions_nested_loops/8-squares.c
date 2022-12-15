#include "main.h"
#include <unistd.h>

/**
 * print_square - main func
 * @size: size
 *
 * Descriptio: feelind died
 *
 * Return: nothing
 */

void print_square(int size);
{
	int j, p;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j < size; j++)
	{
		for (p = 0; p < size; p++)
		{
			_putchar('#');
		}
		-putchar('\n');
	}
}
