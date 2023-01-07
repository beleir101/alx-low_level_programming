#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main func
 * @argc: number of arguments
 * @argv: array of argumentds
 *
 * Description: Prints out name of file
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{	
		printf("%s\n", argv[0]);
	}

	return (0);
}
