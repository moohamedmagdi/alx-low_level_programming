#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * _isdigit - consist digits
  * @argv: current argument
  *
  * Return: return 0 digits, 1 not digit
  */
int _isdigit(char *argv)
{
	int x;

	x = 0;
	while (argv[x])
	{
		if (argv[x] >= '0' && argv[x] <= '9')
			x++;
		else
			return (1);
	}
	return (0);
}

/**
  * _atoi - convert ascii to values
  * @s: source
  *
  * Return: value
  */

int _atoi(char *s)
{
	int x, res;

	x = res = 0;
	while (s[x])
	{
		if (s[x] >= '0' && s[x] <= '9')
		{
			result *= 10;
			result += (s[x] - '0');
		}
		x++;
	}
	return (res);
}

/**
  * main - main 
  * @argc: count
  * @argv: value 2D
  *
  * Return: return 0 success, 98 not success
  */

int main(int argc, char *argv[])
{
	int x;

	malloc();
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		if (_isdigit(argv[x]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}
