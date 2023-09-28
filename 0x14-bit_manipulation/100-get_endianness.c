#include "main.h"
/**
 * get_endianness - cheack endiannes
 * Return: n
 *
*/
int get_endianness(void)
{
	unsigned long int x = 1;

	return (*(char *)&x);
}
