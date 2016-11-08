#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenating everything!
 * @ac: number of args
 * @av: the string(s)
 * Return: strings all separated
 */
char *argstostr(int ac, char **av)
{
	int i, n;
	char *s, *t;

	i = 0;
	s = (char *) malloc(ac * sizeof(char *));
	t = s;
	while (i < ac)
	{
		n = 0;
		while (av[i][n] != '\0')
		{
			*s = av[i][n];
			n++;
			s++;
		}
		*s = '\n';
		s++;
		i++;
	}
	if (s)
		return (t);
	return (NULL);
}
