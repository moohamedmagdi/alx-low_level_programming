#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print int
 * @separator: - separator
 * @n: - num
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	char *sep;
	unsigned int x;
	va_list ls;

	if (separator == NULL || *separator == 0)
		sep = "";
	else
		sep = (char *) separator;
	va_start(ls, n);

	if (n > 0)
		printf("%d", va_arg(list, int));
	for (x = 1; x < n; x++)
		printf("%s%d", sep, va_arg(ls, int));
	printf("\n");
	va_end(ls);
}
