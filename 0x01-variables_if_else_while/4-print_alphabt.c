#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary work area
 *
 * Return: 0 ends the process
 */
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
