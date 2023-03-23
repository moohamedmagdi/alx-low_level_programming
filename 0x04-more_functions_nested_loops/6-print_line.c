#include "main.h"

/**
 * print_line - a functio draws a straight line
 * @n: input number print '_'
 * Return: a '_'
 */
void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= n; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
