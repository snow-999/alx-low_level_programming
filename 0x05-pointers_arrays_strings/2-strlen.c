#include "main.h"
/**
 * _strlen - entry point
 * @s: Task string
 * Return: c
*/
int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
	++c;
	}
	return (c);
}
