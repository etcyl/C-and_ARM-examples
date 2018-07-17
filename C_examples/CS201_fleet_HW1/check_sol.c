/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int check_sol(char** maze, int x, int y, int e_x, int e_y)
{
  if(x == e_x && y == e_y)
    return 1;

  return 0;
}
