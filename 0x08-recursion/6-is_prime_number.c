#include "main.h"
#include <stdio.h>

int chec(int n, int i);

/**
  * is_prime_number - prime num
  * @n: num
  *
  * Return: int
  */

int is_prime_number(int n)
{
	return (chec(n, 1));
}

/**
  * chec - Check num prime
  * @n: numb
  * @i: iterate
  *
  * Return: 1 prime, 0 composite
  */

int chec(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (chec(n, i + 1));
}
