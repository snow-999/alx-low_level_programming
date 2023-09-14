#include "3-calc.h"
/**
 * get_op_func - find the write op
 * @s: string
 * Return: the ritght op
 *
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int x = 0;

	while (x < 5)
	{
		if (s && s[0] == ops[x].op[0] && !s[1])
		{
		return (ops[x].f);
		}
	x++;
	}
	return (NULL);
}
