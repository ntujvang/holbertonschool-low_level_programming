#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary working environment
 *
 * Return: 0 to end
 */
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
