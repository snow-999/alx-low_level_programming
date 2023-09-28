#include "main.h"
/**
 * flip_bits - flip bites
 * @n: number
 * @m: number
 * Return: c
 *
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d = n ^ m;
	int c = 0;

	while (d)
	{
	c++;
	d &= (d - 1);
	}
	return (c);
}
