#include "function_pointers.h"
/**
 * int_index - find the match index
 * @array: is an array
 * @size: number of array
 * @cmp: pointer
 * Return: -1 if faluse i if correct
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
	for (; i < size; i++)
		{
		if (cmp(array[i]))
			{
			return (i);
			}
		}
	}
	return (-1);
}
