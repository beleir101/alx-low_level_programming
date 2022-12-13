#include "main.h"
#include <unistd.h>
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
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');

}
