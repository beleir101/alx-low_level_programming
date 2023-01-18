#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - main func
 * @array: array
 * @size: size of array
 * @action: action required
 *
 * Description: iterating
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size == NULL || action == NULL)
		return;

	unsigned int i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}

}
