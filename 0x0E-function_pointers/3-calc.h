#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/* add proto */
int op_add(int a, int b);
/* sub proto */
int op_sub(int a, int b);
/* multi proto */
int op_mul(int a, int b);
/* div proto */
int op_div(int a, int b);
/* mod proto */
int op_mod(int a, int b);
/* selecting the right function */
int (*get_op_func(char *s))(int, int);
#endif
