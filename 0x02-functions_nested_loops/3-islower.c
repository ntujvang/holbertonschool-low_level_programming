#include "holberton.h"
/**
 * _islower - working area
 *
 * Return: void to end
 */
int _islower(int r)
{
	int r;

	if ( r < 'z' && r > 'a' )
		return(1);
	else
		return(0);
}
