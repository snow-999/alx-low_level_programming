#include "main.h"
/**
 * set_bit - set bite
 * @n: pointer
 * @index: is the index
 * Return: n
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
	return (-1);
	}
	return (!!(*n |= 1l << index));
}
