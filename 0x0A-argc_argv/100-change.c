#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: change money
 * @argc: number
 * @argv: string
 * Return: 0 if it secce 1 if error
 *
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, lcent = 0;
	int money = atoi(argv[1]);
	int cent[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
			lcent += money / cent[i];
			money = money % cent[i];
				if (money % cent[i] == 0)
				{
				break;
				}
			}
		}
		printf("%d\n", lcent);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
	return (0);
}
