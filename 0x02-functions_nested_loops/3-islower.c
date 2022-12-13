#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/** _islower - cecks if its lowercase
 * @c: a character checked to be lower case or not
 *
 * Description: using stdliib check lower case
 *
 * Return: 1 on success
 */

int _islower(int c)
{
	int k = 0;
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			k = 1;
		}
	}
	
	return (k);
}
