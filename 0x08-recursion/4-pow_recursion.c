#include "main.h"

/**
  * _pow_recursion - x power y
  * @x: value of mult
  * @y: times of mult
  *
  * Return: y time
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

