/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "w_follow.h"

int wall_follower(char** maze, int current_x, int current_y, int exit_x, int exit_y)
{
  /*This function solves the maze by calling other functions.
    A person is assumed to be walking the maze, where the following directions
    are encoded as follows:
     
    "South" == 1
    "North" == 2
    "West"  == 3
    "East"  == 4
    "Solution state == 0                                                    */

  /*Set current state to 1 (== "South") */
  int current_state = 1; 

  /*Solve the maze until the exit is reached.
    0 represents the solution state, i.e.
    when the exit is reached.*/
  while(current_state != 0)
       {
         while(current_state == 1)
              current_state = facing_south(maze, &current_x, &current_y, exit_x, exit_y);
         while(current_state == 2)
              current_state = facing_north(maze, &current_x, &current_y, exit_x, exit_y);
         while(current_state == 3)
              current_state = facing_west(maze, &current_x, &current_y, exit_x, exit_y);
         while(current_state == 4)
              current_state = facing_east(maze, &current_x, &current_y, exit_x, exit_y);
       } 

  return 1;  
}
