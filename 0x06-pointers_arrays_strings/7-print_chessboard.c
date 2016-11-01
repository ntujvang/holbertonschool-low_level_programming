#include "holberton.h"
/**
 * print_chessboard - chessboard!!
 * @a: rows
 * Return: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, n;

	i = 0;
	while (i < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar (a[i][n]);
			n++;
		}
		i++;
		_putchar ('\n');
	}
}
