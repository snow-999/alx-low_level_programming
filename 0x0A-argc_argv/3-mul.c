#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: print the resulte of mulutplie two numbers
 * @argc: line
 * @argv: string
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
	printf("Error\n");
	}
	return (0);
}
