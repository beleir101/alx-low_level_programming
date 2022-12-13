#include "main.h"
#include <unistd.h>



/**
 *
 *  _putchar - writes the character c to stdo
 *
 *  
 *
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 *
 */

int _putchar(char c)

{

		return (write(1, &c, 1));

}

int main(void)
{
	char put[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}

	return (0);
}
