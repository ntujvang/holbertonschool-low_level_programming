#include <stdio.h>
/**
 *main - primary working area
 *
 *Return: 0 ends the process
 */
int main(void)
{
	char k;
	int i;
	long int p;
	long long int o;
	float l;

	printf("The size of a char: %lu.\n", (unsigned long)sizeof(k));
	printf("The size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a long int: %lu.\n", (unsigned long)sizeof(p));
	printf("The size of a long long int: %lu.\n", (unsigned long)
	       sizeof(o));
	printf("The size of a foat: %lu.\n", (unsigned long)sizeof(l));

	return (0);
}
