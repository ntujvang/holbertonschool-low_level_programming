#include <stdio.h>
/**
 * startUp - printing before main executes
 * Return: void
 */
void startUp (void) __attribute__ ((constructor));
void startUp (void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
