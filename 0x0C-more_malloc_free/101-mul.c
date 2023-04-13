#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * _puts - print str
  * @str: pointer to str
  *
  * Return: void
  */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
  * _atoi - convert str into an int
  * @s: source
  *
  * Return: value
  */

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstnum, i;

	
	for (firstnum = 0; !(s[firstnum] >= 48 && s[firstnum] <= 57); firstnum++)
	{
		if (s[firstnum] == '-')
		{
			sign *= -1;
		}
	}
	for (i = firstnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		resp *= 10;
		resp += (s[i] -48);
	}

	return (sing * resp);
}

/**
 * print_int - print int
 * @n: int
 *
 * Return: 0
 */

void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *=10);
	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor;
		_putchar('0' + resp);
	}
}

/**
  * main - main 
  * @argc: count
  * @argv: value 2D
  *
  * Return: 0 success, 98 not success
  */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}