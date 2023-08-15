#include "main.h"
/**
 * _isalpha - entery point
 *
 * Description: check the letters
 *
 * Return: always 0
 *
 *  c: is a variable
*/
nt _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
