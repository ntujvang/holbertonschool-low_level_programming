#ifndef MAZE_H
#define MAZE_H

#include <SDL2/SDL.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define screenWidth 1366
#define screenHeight 768

/**
 * struct SDL_Instance - struct that holds SDL window/render info
 * @window: the window used for rendering
 * @renderer: the object for rendering graphics
 * @texture: texture object for rendering smaller items
 * @minimap: texture object used to render minimap
 **/
typedef struct SDL_Instance
{
	SDL_Window *window;
	SDL_Renderer *renderer;
	SDL_Texture *texture;
	SDL_Texture *minimap;
} SDL_Instance;

/**
 * struct thecoord - struct that holds a double x, y value
 * @x: x coordinate
 * @y: y coordinate
 **/
typedef struct thecoord
{
	double x;
	double y;
} coord;

/**
 * struct intcoord - struct that holds int x, y value
 * @x: x coordinate
 * @y: y coordinate
 **/
typedef struct intcoord
{
	int x;
	int y;
} intCoord;

/**
 * struct keys - struct that holds SDL_KEY events
 * @left: holds 1 or 0
 * @right: holds 1 or 0
 * @up: holds 1 or 0
 * @down: holds 1 or 0
 * @m: variable for map
 **/
typedef struct keys
{
	int left;
	int right;
	int up;
	int down;
	int m;
} keys;

/**
 * struct themap - struct that holds the map's info
 * @map: the map stored as a 2D array
 **/
typedef struct themap
{
	char **map;
} map;

char **makeMap(char *);
size_t bigLine(char *);
size_t charCounter(char *);
size_t lineCounter(char *);
void makeSDL(SDL_Instance *, char *);
void makeBomb(char **, char *);
void draw(SDL_Instance, char **, coord, coord, coord, char *, keys, char **);
void checkDone(SDL_Instance, char **, coord, int *);
void keyCheck(keys *, SDL_Event *);

void move(keys, coord *, coord *, coord *, char **);

void minimapFOV(SDL_Instance *, coord, coord, coord);
void drawMinimap(SDL_Instance *, char **, char *);
void freeSDL(SDL_Instance);
#endif
