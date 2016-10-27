#include "holberton.h"
/**
 * *cap_string - caps to all beginners!
 * @l: starting
 * Return: some cap letter
 */
char *cap_string(char *l)
{
	int i;

	i = 0;
	if (l[i] >= 'a' && l[i] <= 'z')
	{
		l[i] = 'A' + (l[i] - 'a');
		i++;
	}
	i = 0;
	while (l[i] != '\0')
	{
		if ((l[i] == ' ' || l[i] == '\t' || l[i] == '\n' || l[i] == ','
		    || l[i] == ';' || l[i] == '.' || l[i] == '!' || l[i] == '?'
		    || l[i] == '"' || l[i] == '(' || l[i] == ')' || l[i] == '{'
		    || l[i] == '}') && (l[i + 1] >= 'a' && l[i + 1] <= 'z'))
		{
			l[i + 1] = 'A' + (l[i + 1] - 'a');
		}
		i++;
	}
	return (l);
}
