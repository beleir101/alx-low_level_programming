#include <stdlib.h>

/**
 * int_index - main func
 * @array: array
 * @size: size of array
 * @cmp: function used
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == size)
		return (-1);

	return (-1);
}
