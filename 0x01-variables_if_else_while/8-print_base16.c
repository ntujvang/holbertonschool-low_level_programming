#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary working area
 *
 * Return: 0 to end
 */
int main(void)
{
	char i, j;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	j = 'a';
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
