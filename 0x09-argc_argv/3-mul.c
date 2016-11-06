#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - working area
 * @argc: count
 * @argv: number of arrays
 * Return: 1 for Error, 0 for non error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
