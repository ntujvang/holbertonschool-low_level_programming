#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary working environment
 *
 * Return: 0 to end
 */
int main(void)
{
	char b, a;

	b = 'a';
	while (b <= 'z')
	{
		putchar(b);
		b++;
	}
	a = 'A';
	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
