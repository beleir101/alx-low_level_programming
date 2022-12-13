#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: nothing
 */

int main(void)
{
	char put[8] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}

	return (0);
}
