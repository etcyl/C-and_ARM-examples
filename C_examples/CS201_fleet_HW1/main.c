/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "w_follow.h" 

int main(int argc, char* argv[])
{  
    /*Integer variables store no. of columns, rows, and the exit coordinates*/ 
    int num_rows;
    int num_columns;
    int start_x;
    int start_y;
    int exit_x;
    int exit_y;

    /*Pointer to the maze*/
    char** maze = NULL;

    /*Open the file by calling function, which is passed the file pointer*/
    create_maze(argv[1], &maze, &start_y, &start_x, &exit_x, &exit_y, &num_rows, &num_columns);
    if(print_maze(maze, num_rows, num_columns))
       printf("\n maze printed\n");
    else
       printf("\n maze print not successful");
  
    /*Solve the maze and print the  maze solution*/
    if(wall_follower(maze, start_x, start_y, exit_x, exit_y))
      {
       print_maze(maze, num_rows, num_columns);
       printf("\n maze solved");
      }
    else
       printf("\n maze not solved");

   /*Destroy all dynamically alocated memory*/
   rm_maze(maze, num_rows);

   return 0;
}
