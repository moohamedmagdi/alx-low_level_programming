#include <stdarg.h>

/**
 * sum_them_all - sum pass
 * @n: num
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum;
	va_list ls;

	va_start(ls, n);
	for (x = 0, sum = 0; x < n; x++)
		sum += va_arg(ls, int);

	va_end(ls);
	return (sum);
}
