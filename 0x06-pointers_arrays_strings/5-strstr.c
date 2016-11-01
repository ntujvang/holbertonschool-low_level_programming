#include "holberton.h"
/**
 * *_strstr - finding first occurence of a pattern
 * @haystack: target objective
 * @needle: search requirement
 * Return: the search requirment
 */
char *_strstr(char *haystack, char *needle)
{
	char *beg;
	char *pat;

	pat = needle;
	while (*haystack != '\0')
	{
		beg = haystack;
		while (*haystack == *pat && *haystack != '\0'
		       && *pat != '\0')
		{
			haystack++;
			pat++;
		}
		if (*pat == '\0')
			return (beg);
		haystack = beg + 1;
	}
	return ('\0');
}
