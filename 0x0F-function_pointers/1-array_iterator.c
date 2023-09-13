#include "function_pointers.h"
/**
 * array_iterator - iterate an function
 * @array: is a array
 * @size: size of array
 * @action: pointer function
 *
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
	int *e = array + size - 1;

	while (array <= e)
	{
	action(*array++);
	}
	}
}
