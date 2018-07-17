/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void write_w(char** maze, int x, int y)
{
     maze[x][y] = 'W';
     
     return;
}
