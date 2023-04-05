#include "main.h"

int chec(char *st, int len, int co);

/**
 * chec - check
 * @st: strn
 * @len: len strn
 * @co: counts
 * Return: 1 if palindrome, 0 if not
 */

int chec(char *st, int len, int co)
{
	if (co >= len)
		return (1);
	if (st[len] == st[co])
		return (chec(st, len - 1, co + 1));
	return (0);
}

/**
 * is_palindrome - check palindrome
 * @s: strn
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int co = 0;

	return (chec(s, len - 1, co));
}

/**
 * _strlen_recursion - return len
 * @s: strn
 *
 * Return: len
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
