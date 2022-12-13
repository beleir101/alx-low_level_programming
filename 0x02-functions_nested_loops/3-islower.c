#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/** _islower - cecks if its lowercase
 * @c: a character checked to be lower case or not
 *
 * Description: using stdliib check lower case
 *
 * Return: 1 on success
 */

int _islower(int c)
{
	int k = islower(c);

	if (k == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
