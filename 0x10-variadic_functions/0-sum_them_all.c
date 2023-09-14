#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum number
 *
 * @n: num of arguments
 *
 * Return: sum
 *
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list ar;

	if (n == 0)
	{
	return (0);
	}
	va_start(ar, n);
	for (; i < n; i++)
	{
	sum += va_arg(ar, int);
	}
	va_end(ar);
	return (sum);
}
