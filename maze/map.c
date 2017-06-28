#include "maze.h"

/**
 * lineCounter - function to obtain number of lines in file
 * @file: file path
 * Return: amount of lines found or 0
 **/
size_t lineCounter(char *file)
{
	FILE *maze;
	char *line;
	ssize_t reader = 0;
	size_t i, buffsize;

	maze = fopen(file, "r");
	if (maze == NULL)
	{
		printf("Invalid file\n");
		return (0);
	}
	i = 0;
	while (1)
	{
		reader = getline(&line, &buffsize, maze);
		if (reader == -1)
		{
			break;
		}
		i++;

	}
	fclose(maze);
	free(line);
	return (i);
}

/**
 * charCounter - function that obtains the num of chars per line
 * @line: the line in the file
 * Return: the count
 **/
size_t charCounter(char *line)
{
	size_t i;

	i = 0;
	while (line[i] != '\0')
		i++;
	return (i);
}

/**
 * bigLine - function that obtains the largest value for map's length
 * @line: the line in the file
 * Return: biggest value for file's length
 **/
size_t bigLine(char *line)
{
	FILE *maze;
	char *l;
	ssize_t reader;
	size_t charCount, store, buffsize;

	l = NULL;
	reader = store = 0;
	maze = fopen(line, "r");
	if (maze == NULL)
		return (0);
	reader = getline(&l, &buffsize, maze);
	while (reader != -1)
	{
		charCount = charCounter(l);
		if (charCount > store)
			store = charCount;
		reader = getline(&l, &buffsize, maze);
	}
	fclose(maze);
	free(l);
	return (store);
}



/**
 * makeMap - function that reads the file and stores it as a 2D array
 * @file: file path
 * Return: the file stored as a 2D array
 **/
char **makeMap(char *file)
{
	FILE *maze;
	char **map, *line;
	ssize_t reader;
	size_t lineCount, charCount, i, j, buffsize;

	reader = 0;
	line = NULL;
	i = 0;
	lineCount = lineCounter(file);
	if (lineCount == 0)
		return (NULL);
	map = malloc(sizeof(int *) * lineCount);
	if (map == NULL)
	{
		free(map);
		return (NULL);
	}
	maze = fopen(file, "r");
	if (maze == NULL)
		return (NULL);
	reader = getline(&line, &buffsize, maze);
	while (reader != -1)
	{
		charCount = charCounter(line);
		map[i] = malloc(sizeof(char) * charCount + 1);
		if (map == NULL)
			return (NULL);
		for (j = 0; j < charCount; j++)
		{
			map[i][j] = line[j];
		}
		i++;
		reader = getline(&line, &buffsize, maze);
	}
	fclose(maze);
	free(line);
	return (map);
}
