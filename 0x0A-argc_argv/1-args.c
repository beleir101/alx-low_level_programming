#include <stdio.h>
#include <stdlib.h>

/**
 * main - main func
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Description: described
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
