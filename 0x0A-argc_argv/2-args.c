#include <stdio.h>
#include <stdlib.h>

/**
 * main - main func
 * @argc: int
 * @argv: array
 *
 * Description: will print all
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)
	{
		int i = 0;

		for (; i < argc; i++)
		{
			printf("%s\n", *argv++);
		}
	}

	return (0);
}
