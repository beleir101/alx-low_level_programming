#include "main.h"
#include <unistd.h>

/**
 * print_alphabet_x10 - prints the alphabet
 * @void: takes no argument
 *
 * Description: prints the alphabet 10 times
 *
 * Return: Always nothing
 */

void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 0; i <= 9; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');	
	}
}
