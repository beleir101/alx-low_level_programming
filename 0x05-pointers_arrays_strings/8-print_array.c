#include <stdio.h>
#include "main.h"

/**
 * print_array - main func
 * @a: array
 * @n: starting integer
 *
 * Description: Will print out elements of array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int k = 0;

	for (; k < n; k++)
	{
		if ((k + 1) < n)
		{
			printf("%d, ", a[k]);
		}
		else
		{
			printf("%d", a[k]);
		}

	}
	printf("\n");
}
