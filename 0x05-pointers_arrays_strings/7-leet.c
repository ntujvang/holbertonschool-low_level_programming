#include "holberton.h"
/**
 * *leet - replacing some digits
 * @l: item going in
 * Return: a number!
 */
char *leet(char *l)
{
	int i;

	i = 0;
	while (l[i] != 0)
	{
		while (l[i] == 'a' || l[i] == 'A')
		{
			l[i] = '4';
		}
		while (l[i] == 'e' || l[i] == 'E')
		{
			l[i] = '3';
		}
		while (l[i] == 'o' || l[i] == 'O')
		{
			l[i] = '0';
		}
		while (l[i] == 't' || l[i] == 'T')
		{
			l[i] = '7';
		}
		while (l[i] == 'l' || l[i] == 'L')
		{
			l[i] = '1';
		}
		i++;
	}
	return (l);
}
