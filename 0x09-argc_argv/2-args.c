#include "holberton.h"
#include <stdio.h>
/**
 * main - working area
 * @argc: counter for arrays
 * @argv: array list
 * Return: 0 to end
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
	       printf("%s\n", argv[i]);
	       i++;
	}
	return (0);
}
