#include <stdio.h>
/**
 * premain - excute before main
 * Return: null
 *
 *
*/
void __attribute__((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
