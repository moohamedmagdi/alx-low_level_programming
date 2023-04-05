#include "main.h"

int chec(char *s);

/**
  * is_palindrome - string palindrome
  * @s: string
  *
  * Return: int
  */

int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);
	return (chec(s));
}

/**
  * chec - check palindrome
  * @s: string
  *
  * Return: int
  */

int chec(char *s)
{
	int l = _strlen_recursion(s) - 1;
	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
  * _strlen_recursion - get len
  * @s: strn
  *
  * Return: len
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
