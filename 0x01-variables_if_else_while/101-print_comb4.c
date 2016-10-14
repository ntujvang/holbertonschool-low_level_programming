#include <stdio.h>
#include <stdlib.h>
/**
 * main - primary working area
 *
 * Return: 0 ends the process
 */
int main(void)
{
	int i;
	int k;
	int j;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if ((i < j && i < k) && j != k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			k = j + 1;
			j++;
		}
		j = i + 2;
		k = i + 3;
		i++;
	}
	putchar('\n');
	return (0);
}
