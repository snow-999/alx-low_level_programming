#include "main.h"
/**
 * _isalpha - print alphabet
 *
 * Description: check the letters
 *
 * @c: Task number
 *
 * Return: always 0
 *
 *  c: is a variable
*/
int _isalpha(int c)
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
