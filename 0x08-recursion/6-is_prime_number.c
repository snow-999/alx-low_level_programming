#include "main.h"
/***/
int check(int x, int n);
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
 return (check(n, 2));
}
int check(int x, int n)
{
	if (x == 1)
	{
	return (0);
	}
	if (n % x == 0 && x > 1)
	{
	return (1);
	}
	else
	{
	return (check(n, x + 1));
	}
}
