CS 201
4/19/2016
Matt Fleetwood
Homework 1

     This program uses dynamically allocated arrays and a Wall Follower algorithm. The arrays store
a maze read in from a text file. The text file is entered into the terminal by the user. 

	The algorithm (Wall Follower) is implemented with a bias to the "right" (of the current
location in the maze). The size (in this case given as column, row) of the
multidimensional array is read first from the file, then the start and exit coordinates
of the maze. Several functions, such as check_west, move_west, check_sol, facilitate the function 
of the Wall Follower algorithm. A larger control structure (e.g. facing_north) maintains these lower 
functions in order to determine when the exit coordinates have been reached. In main, only three functions 
are called: create_maze, wall_follower,and print_maze.  

To compile the program, type make hw1 in the command line of the terminal.

To run the program, type ./hw1 maze#.txt, where # is the number of the maze text file
used for the program to solve.

To delete the program, type make clean in the command line of the terminal.