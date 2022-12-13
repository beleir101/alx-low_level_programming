#include "main.h"
#include <unistd.h>
/**
 * main - check code
 *
 * print_alphabet - prints alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');

}
