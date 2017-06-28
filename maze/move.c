#include "maze.h"

/**
 * rotate - function that turns camera left or right
 * @plane: the field of view info
 * @dir: direction vector info
 * @num: the multiplier for how fast to turn
 **/
void rotate(coord *plane, coord *dir, double num)
{
	double tempDx, tempPx;

	tempDx = dir->x;
	dir->x = dir->x * cos(num) - dir->y * sin(num);
	dir->y = tempDx * sin(num) + dir->y * cos(num);
	tempPx = plane->x;
	plane->x = plane->x * cos(num) - plane->y * sin(num);
	plane->y = tempPx * sin(num) + plane->y * cos(num);
}

/**
 * move - function that moves player forward/backwards
 * @keyPress: struct that contains SDL Key Event info
 * @pos: player position
 * @dir: player's direction vector
 * @plane: player's field of view
 * @map: 2D array storage of map
 **/
void move(keys keyPress, coord *pos, coord *dir, coord *plane, char **map)
{

	if (keyPress.right)
		rotate(plane, dir, -.05);
	if (keyPress.left)
		rotate(plane, dir, .05);
	if (keyPress.up)
	{
		if (map[(int)(pos->x + dir->x * .05)][(int)pos->y] == '0')
			pos->x += dir->x * .05;
		if (map[(int)pos->x][(int)(pos->y + dir->y * .05)] == '0')
			pos->y += dir->y * .05;
	}
	if (keyPress.down)
	{
		if (map[(int)(pos->x - dir->x * .05)][(int)pos->y] == '0')
			pos->x -= dir->x * .05;
		if (map[(int)pos->x][(int)(pos->y - dir->y * .05)] == '0')
			pos->y -= dir->y * .05;
	}
}
