#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary work area
 * struct int - values to store char
 * Return: 0 to end
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	j = '0';
	/*nested while loop*/
	while (i <= '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i < '9' || j < '9')
			putchar(',');
			putchar(' ');
			j++;
		}
		j = '0';
		i++;
	}
	putchar('\n');
	return (0);
}
