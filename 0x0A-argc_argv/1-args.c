#include <stdio.h>
/**
 * main - entry point
 * @argc: line comand
 * @argv: string
 * Description: print the argc
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
