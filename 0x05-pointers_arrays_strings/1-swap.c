#include "main.h"

/**
 * swap_int - function
 * @a: first numb to be swapped
 * @b: another one to be swapped
 *
 * Description: this function will swap the values of a and b
 *
 * Retrun: nothin
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;

}
