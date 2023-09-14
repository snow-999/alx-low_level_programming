#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: string
 * @n: numbers
 *
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;

	if (!n && !separator)
	{
	printf("\n");
	}
	va_start(ar, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(ar, int));
	if (separator && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	printf("\n");
	va_end(ar);
}
