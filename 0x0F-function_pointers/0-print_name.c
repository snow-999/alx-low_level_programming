#include "function_pointers.h"
/**
 * print_name - function print a name
 * @name: is an argument
 * @f: is a pointer
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
	(*f)(name);
	}
}
