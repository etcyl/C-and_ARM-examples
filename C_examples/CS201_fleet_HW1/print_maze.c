/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int print_maze(char** maze, int num_rows, int num_columns)
{
    int i, j;

    /*Print the maze*/
    for(i = 0; i < num_rows; ++i)
       {
        for(j = 0; j < num_columns; ++j)
            printf("%c", (maze[i][j]));
        printf("\n");
       }
    
    return 1;
}

