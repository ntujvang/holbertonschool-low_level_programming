# The Maze

**One of Holberton School's End of Year project option**

The project is to attempt to recreate Wolfenstein's 3D game via SDL2.


---------------------------------------------
**Author**
- **Ntuj Vang**, \<ntuj.vang@holbertonschool.com>, @yogmazoophem
---------------------------------------------

**Compilation Instructions**

In order to compile this you must have SDL2 installed, currently no extended SDL libraries are in use:

Link for help installing SDL2:
<a href="https://wiki.libsdl.org/Installation">

For simple compilation a makefile has been included with a clean option. However if one wishes to compile without input the following.

For MAC OS compilation use:
<pre><code>
gcc *.c `sdl2-config --cflags --libs` -lSDL2_ttf
</code></pre>

For Linux OS compilation use:
<pre><code>
gcc *.c `sdl2-config --cflags --libs` -lSDL2-ttf -lm
</code></pre>

Optional flags for non-Holberton School students are:
- -Wall
- -Werror
- -Wextra
- -pedantic

----------------------------------------
<img src = "https://github.com/ntujvang/holbertonschool-low_level_programming/blob/master/maze/pics/maze.png">

To launch the maze after you have successfully compiled it type in:
<pre><code>
./a.out mazes/level
</pre></code>
A few maze files have been provided. But feel free to create your own with these variables:
- 1 = a wall
- 0 = open floor

The perimeter of the maze should be all 1 or else the game will crash due to access of unallocated memory.
Any other characters used will render a form with the same color as the floor.

The maze comes with a minimap option. To show it press 'M' on the keyboard.

**Maze is a work in progress!! There is no winning in this maze, only way to escape it is to quit out of it, smash endlessly into walls until you segfault it**