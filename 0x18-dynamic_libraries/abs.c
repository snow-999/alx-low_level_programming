#include "main.h"
/**
 * _abs - entry point
 * @n: Task number
 * Description: print the abslute value
 *
 * Return: always 0
 *
*/
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
