#include "main.h"

/**
 * factorial - main func
 * @n: integer whose factorial is going to be calculated
 * Description: will calculate factorial
 *
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
