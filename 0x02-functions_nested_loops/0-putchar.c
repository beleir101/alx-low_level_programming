#include "main.h"
#include <unistd.h>



/**
 * main - entry point
 *
 * Return: On success 0
 *
 */

int main(void)
{
	char put[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');

	return (0);
}
