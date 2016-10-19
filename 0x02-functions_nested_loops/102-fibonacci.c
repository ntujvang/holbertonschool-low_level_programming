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
		printf("%lu, ", p);
		n = i;
		i = p;
	}
	printf("\n");
	return (0);
}
