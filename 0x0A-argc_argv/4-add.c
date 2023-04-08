#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add var func.
 * @argc: count 
 * @argv: value
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y, add;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[x]);
	}
	printf("%i\n", add);
	return (0);
}
