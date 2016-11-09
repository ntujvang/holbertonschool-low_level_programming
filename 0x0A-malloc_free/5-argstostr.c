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
	char *s, *tmp;

	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	s = malloc(ac * sizeof(char *));
	if (s == NULL)
		return (NULL);
	tmp = s;
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
	return (tmp);
}
