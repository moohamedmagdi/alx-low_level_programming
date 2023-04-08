#include <stdio.h>
#include <stdlib.h>

/**
 * main - print func.
 * @argc: count
 * @argv: value
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, edit;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	edit = atoi(argv[1]);

	for (sum = 0; edit > 0; sum++)
	{
		if (edit - 25 >= 0)
			edit = edit - 25;
		else if (edit - 10 >= 0)
			edit = edit - 10;
		else if (edit - 5 >= 0)
			edit = edit - 5;
		else if (edit - 2 >= 0)
			edit = edit - 2;
		else if (edit - 1 >= 0)
			edit = edit - 1;
	}
	printf("%d\n", sum);
	return (0);
}
