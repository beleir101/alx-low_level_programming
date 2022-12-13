#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - prints alphabets takes no argument
 * @void: doesn't have any parameters
 *
 * Description: printing alphabet
 *
 * Return: nothing
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
