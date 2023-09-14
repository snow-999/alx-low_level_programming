#include "variadic_functions.h"
/**
 * print_strings - print string
 * @separator: string
 * @n: numbers
 *
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptr;
	va_list ar;

	if (!n)
	{
	printf("\n");
	}
	va_start(ar, n);
	for (; i < n; i++)
	{
	ptr = va_arg(ar, char *);
	if (ptr)
	{
	printf("%s", ptr);
	}
	else
	{
	printf("(nil)");
	}
	if (i < n - 1)
	{
	if (separator)
	{
	printf("%s", separator);
	}
	}
	}
	printf("\n");
	va_end(ar);
}
