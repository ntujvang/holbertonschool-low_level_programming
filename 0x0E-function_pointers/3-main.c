#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - working area
 * @argc: num of arguments
 * @argv: size of array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, n, sum;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	n = atoi(argv[3]);
	op = *argv[2];
	if ((op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
		|| argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (n == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	sum = (*get_op_func)(argv[2])(i, n);
	printf("%d\n", sum);
	return (0);
}
