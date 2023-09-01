#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point
 * Description: add number
 * @argc: line number
 * @argv: string
 * Return: 0 if it work 1 if error
*/
int main(int argc, char *argv[])
{
	int i, x, res = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			{
			printf("Error\n");
			return (1);
			}
		}
	res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}
