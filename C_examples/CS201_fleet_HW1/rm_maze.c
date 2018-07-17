/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>

int rm_maze(char** maze, int num_rows)
{
    int i;
    for(i = 0; i < num_rows; ++i)
        free (maze[i]);
    free (maze);

    return 1;
}
