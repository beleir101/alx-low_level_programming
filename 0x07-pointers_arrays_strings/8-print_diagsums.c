#include "main.h"

/**
 * print_diagsums - main dunc
 * @a: first argument
 * @size: size to be used
 *
 * Description: adds the diagonals
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum1 = 0, sum2 = 0;

	for (; i < max; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
