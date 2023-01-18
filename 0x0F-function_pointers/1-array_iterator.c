#include <stdlib.h>

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
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;


	for (; i < size; i++)
	{
		action(array[i]);
	}

}
