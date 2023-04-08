#include "main.h"

/**
 * _islower - a function that checks for low character
 * @c: single letter in
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
