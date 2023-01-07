#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	else
		printf("0");

	return (0);
}
