#include <stdio.h>
#include <stdlib.h>

/**
 * main - mainfunc
 * @argc: int
 * @argv: array
 *
 * Description: described
 * Return: 1 or 0 depending
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int rsult, i = atoi(argv[1]), j = atoi(argv[2]);

		rsult = i * j;
		printf("%d\n", rsult);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
