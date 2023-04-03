#include "main.h"

/**
 * print_chessboard - print chess
 *
 * @a: chessboard printed.
 */

void print_chessboard(char (*a)[8])
{
	int x1, x2;
  for (x1 = 0; a[x1][7]; x1++)
	{
		for (x2 = 0; x2 < 8; x2++)
			_putchar(a[x1][x2]);
		_putchar('\n');
	}
}
