#include <stdio.h>
#include <stdlib.h>
/**
 * main - working area
 *
 * Return: 0 ends process
 */
int main(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
