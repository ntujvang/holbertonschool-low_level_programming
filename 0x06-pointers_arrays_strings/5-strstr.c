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
		while (*beg == *pat && *beg != '\0'
		       && *pat != '\0')
		{
			beg++;
			pat++;
		}
		if (*pat == '\0')
			return (haystack);
		haystack = haystack + 1;
	}
	return ('\0');
}
