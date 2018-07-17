/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "w_follow.h"

int create_maze(char* argv, char*** maze, int* start_y, int* start_x, int* exit_x, int* exit_y, int* num_rows, int* num_columns)
{
  /*Declare local variables here*/
  int i, j; 
  char skip_commas;
  FILE* file;
  char** _maze;

  /*Open the file with read settings*/
  file = fopen(argv, "r");

  /*Get and set number of rows and columns*/
  fscanf(file, "%d,%d\n", num_columns, num_rows);
  /*Sanity check that columns and rows are correct*/
  printf("%d %d\n", (*num_rows), (*num_columns));

  /*Get and set the entrance coordinates*/
  fscanf(file, "%d,%d\n", start_y, start_x);
  /*Sanity check that columns and rows are correct*/
  printf("%d %d\n", *start_x, *start_y); 

  /*Get and set the exit coordinates*/
  fscanf(file, "%d,%d\n", exit_y, exit_x);
  /*Sanity check that exit coordinates are correct*/
  printf("%d %d\n", *exit_x, *exit_y);

  /*Allocate memory for the maze, i.e. get and set the maze*/
  _maze = (char**) malloc(sizeof(char*)*(*num_rows)); 
  for(i = 0; i < *num_rows; ++i)   
       _maze[i] = (char*) malloc(sizeof(char)*(*num_columns));
  for(i = 0; i < *num_rows; ++i)
     {
      for(j = 0; j < *num_columns; ++j)
           fscanf(file, "%c", &_maze[i][j]);
       /*1 fscanf to throw away 1 comma*/
       fscanf(file, "%c", &skip_commas);
     }
  
  fclose(file); /*Close file*/ 

  /*Set the maze pointer in main to the local copy here*/ 
  *maze = _maze;

  return 1;
}
