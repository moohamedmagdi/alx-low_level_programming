#include <stdio.h>

/**
 * main
 *
 * Description
 *
 * Return
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
