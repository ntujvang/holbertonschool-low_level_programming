#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - working area
 * @argc: counter for arrays
 * @argv: array list
 * Return: 0 for true, 1 for false
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
