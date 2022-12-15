#include "main.h"
#include <unistd.h>

/**
 * mul - main func
 * @a: first member
 * @b: first integer to be multiplied
 *
 * Description: This function will return product of two numbers
 *
 * Return: Always 0
 */

int mul(int a, int b)
{
	int prod;

	prod = a * b;
	_putchar(prod);

	return (0);
}
