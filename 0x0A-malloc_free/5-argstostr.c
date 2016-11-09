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
	int i, n, len;
	char *s, *tmp;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = 0;
	for (i = 0; i < ac; i++)
	{
		n = 0;
		while (av[i][n] != '\0')
		{
			len++;
			n++;
		}
		len++;
	}
	len++;
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	tmp = s;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			*s = av[i][n];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (tmp);
}
