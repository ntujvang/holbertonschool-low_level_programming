#include <stdio.h>
/**
 * main - working area
 *
 * Return: 0 to end
 */
int main(void)
{
	unsigned long p, i, n, k;

	n = 1;
	i = 2;
	printf("1, 2, ");
	for (k = 0; k < 48; k++)
	{
		p = i + n;
		n = i;
		i = p;
		if (k != 47)
			printf("%lu, ", p);
		else
			printf("%lu", p);
	}
	printf("\n");
	return (0);
}
