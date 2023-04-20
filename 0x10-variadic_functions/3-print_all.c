#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printf_char - print a char
 * @list: va_list
 *
 * Return: void
 */

void printf_char(va_list list)
{
	printf("%c", (char) va_arg(list, int));
}

/**
 * printf_int - print an int
 * @list: va_list
 *
 * Return: void
 */

void printf_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printf_float - print a float
 * @list: va_list
 *
 * Return: void
 */

void printf_float(va_list list)
{
	printf("%f", (float) va_arg(list, double));
}

/**
 * printf_string - print a string
 * @list: va_list
 *
 * Return: void
 */

void printf_string(va_list list)
{
	char *str = va_arg(list, char*);

	while (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}


/**
 * print_all - print differnt types
 * @format: str with type info
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	const char *ptr;
	va_list list;
	funckey key[4] = { {printf_char, 'c'}, {printf_int, 'i'},
			   {printf_float, 'f'}, {printf_string, 's'} };
	int keyind = 0, notfirst = 0;

	ptr = format;
	va_start(list, format);
	while (format != NULL && *ptr)
	{
		if (key[keyind].spec == *ptr)
		{
			if (notfirst)
				printf(", ");
			notfirst = 1;
			key[keyind].f(list);
			ptr++;
			keyind = -1;
		}
		keyind++;
		ptr += keyind / 4;
		keyind %= 4;
	}
	printf("\n");

	va_end(list);
}
