#include <stdio.h>
/**
 * main - primary working area
 *
 * Return: 0 ends the process
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	j = '1';
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (i < '8' || j < '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		j = i + 1;
		i++;
	}
	putchar('\n');
	return (0);
}
