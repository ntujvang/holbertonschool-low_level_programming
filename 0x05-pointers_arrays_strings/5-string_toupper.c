#include "holberton.h"
/**
 * *string_toupper - capitalize everything!!!
 * @l: first letter
 * Return: the string ALL CAPS
 */
char *string_toupper(char *l)
{
	int i;

	i = 0;
	while (l[i] != '\0')
	{
		if ((l[i] >= 'a') && (l[i] <= 'z'))
		{
			l[i] = 'A' + (l[i] - 'a');
		}
		i++;
	}
	return (l);
}
