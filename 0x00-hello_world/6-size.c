#include <stdio.h>
/**
 *main - entry point
 *
 *Description: print the size of variables
 *
 *Return: always 0
*/
int main(void)
{
	printf("the size of char  %d byte(s)\n", sizeof(char));
	printf("the size of int  %d byte(s)\n", sizeof(int));
	printf("the size of long int  %d byte(s)\n", sizeof(long int));
	printf("the size of long long  %d byte(s)\n", sizeof(long long));
	printf("the size of float  %d byte(s)\n", sizeof(float));
	return (0);
}

