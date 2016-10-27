#include "holberton.h"
/**
 * *rot13 - making a puzzle
 * @l: items going in
 * Return: the char's opposite!
 */
char *rot13(char *l)
{
	int i;

	i = 0;
	while (l[i] != '\0')
	{
		if ((l[i] >= 'a' && l[i] <= 'm') ||
		    (l[i] >= 'A' && l[i] <= 'M'))
			l[i] = l[i] + 13;
		else
		{
			while ((l[i] >= 'N' && l[i] <= 'Z') ||
			       (l[i] >= 'n' && l[i] <= 'z'))
				{
					l[i] = l[i] - 13;
				}
		}
		i++;
	}
	return (l);
}
