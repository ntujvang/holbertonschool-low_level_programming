#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary working area
 *
 * Return: 0 to end the process
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
