#include <stdio.h>
/**
 * main - entry point
 * @argc: line
 * @argv: string
 * Description: print argv[i] while i less than argv
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
