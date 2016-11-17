#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - get the operator for the function
 * @s: operator
 * Return: operator or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
