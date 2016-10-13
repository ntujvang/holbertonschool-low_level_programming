#include <stdio.h>
/**
 * main - place where things work
 *
 * Return: 0 to end this thing
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
