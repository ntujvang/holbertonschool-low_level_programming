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

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(k));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(p));
	printf("Size of a long long int: %lu.\n", (unsigned long)
	       sizeof(o));
	printf("Size of a foat: %lu.\n", (unsigned long)sizeof(l));

	return (0);
}
