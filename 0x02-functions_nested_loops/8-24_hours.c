#include "holberton.h"
/**
 * jack_bauer - working area
 *
 * Return: void
 */
void jack_bauer(void)
{
	int first;
	int second;

	first = 00;
	second = 00;
	for (first = 00; first < 24; first++)
	{
		for (second = 00; second < 60; second++)
		{
			_putchar((first / 10) + '0');
			_putchar((first % 10) + '0');
			_putchar(':');
			_putchar((second / 10) + '0');
			_putchar((second % 10) + '0');
			_putchar('\n');
		}
	}
}
