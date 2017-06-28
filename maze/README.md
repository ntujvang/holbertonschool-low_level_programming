# The Maze

**One of Holberton School's End of Year project option**

The project is to attempt to recreate Wolfenstein's 3D game via SDL2.

---------------------------------------------
**Author**
- **Ntuj Vang**, \<ntuj.vang@holbertonschool.com>, @yogmazoophem
---------------------------------------------

**Compilation Instructions**

The files should be compiled using and runs on both Linux and Mac OS
<pre><code>
gcc *.c `sdl2-config --cflags --libs`
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

The maze comes with a minimap option. To show it press 'M' on the keyboard.

**Maze is a work in progress and is contains nothing but a map which allows the player to wander around aimlessly.. There is no winning in this maze, only way to escape it is to quit out of it!**