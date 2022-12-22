#include "main.h"

/**
 * reverse_array - main func
 * @a: array
 * @n: size of the array
 * Description: this will reverse the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int k;

	while (i < n)
	{
		a++;
		i++;
	}
	i = -1;
	k = 0 - n;

	while (i >= k)
	{
		if (i == -1)
		{
			printf("%d", a[i]);
			i--;
		}
		else
		{
			printf(", %d", a[i]);
			i--;
		}
	}
	printf("\n");
}
