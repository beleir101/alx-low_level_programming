#include "main.h"

/**
 * main - check code
 *
 * Return: Always 0
 */

int main(void)
{
	print_alphabet();
	
	return (0);
}
int print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	putchar('\n');

	return (0);
}
