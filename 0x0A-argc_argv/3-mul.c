#include <stdio.h>
#include <stdlib.h>

/**
 * main - print func.
 * @argc: count
 * @argv: value
 *
 * Return: 1 if less than two arg, otherwise 0
 */
int main(int argc, char **argv)
{
	int x = 0, y = 0;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
