#include <stdio.h>
#include <stdlib.h>
/**
 * main - working area
 *
 * Return: 0 ends
 */
int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		printf("%x", i);
		i++;
	}
	printf("\n");
	return (0);
}
