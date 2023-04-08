#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add var func.
 * @argc: count 
 * @argv: value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;
	int sum = 0;
	char *ptr;
	int num;

	if (argc > 1)
	{
		for (x = 1; argv[x]; x++)
		{
			num = strtol(argv[x], &ptr, 10);
			if (!*ptr)
				sum += num;
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
