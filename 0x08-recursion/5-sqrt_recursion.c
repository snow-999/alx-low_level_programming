#include "main.h"
/**
 * _sqrt_recursion - calculate root squer
 * @n: task number
 * @x: task number
 * Description: Retrun the root squer of number
 * Return: root_squer(n, 1)
*/
int check(int x, int n);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
return (check(n, 0));
}
/**
 * check - search for the root sqeur of certien number
 * @n: task number
 * @x: task number
 * Description: Find the root squer for numbers
 * Return: x, (root_squer(n, x + 1)), -1
 *
*/
int check(int x, int n)
{
	if (x * x == n)
	{
	return (x);
	}
	if (x * x < n)
	{
		return (check(n, x + 1));
	}
	return (-1);
}
