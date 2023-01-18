#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - main func
 * @name: name
 * @*: to be printed
 * @f: leab\
 * Description: prints name
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
