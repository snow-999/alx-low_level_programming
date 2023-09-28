#include "main.h"
/**
 * get_bit - get the bites
 * @n: number
 * @index: is the index
 * Return: n
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
	return (-1);
	}
	return (n >> index & 1);
}
