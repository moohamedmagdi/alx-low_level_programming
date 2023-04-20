#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print str
 * @separator: - separator
 * @n: - num
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *sep, *ptr;
	unsigned int x;
	va_list ls;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ls, n);

	if (n > 0)
		printf("%s", va_arg(ls, char *));
	for (x = 1; x < n; x++)
	{
		ptr = va_arg(ls, char*);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(ls);
}
