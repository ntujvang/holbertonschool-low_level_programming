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

	printf("Size of a char: %lu byte(s)\n", sizeof(k));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(p));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(o));
	printf("Size of a foat: %lu byte(s)\n", sizeof(l));

	return (0);
}
