#include "main.h"
/**
 * _pow_recursion - calculate x power y
 * @x: task number
 * @y: task number
 * Return: x * _pow_recursion(x ,y - 1)
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else if (y == 1)
	{
	return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
