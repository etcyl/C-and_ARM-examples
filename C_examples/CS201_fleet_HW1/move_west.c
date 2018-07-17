/*Pre-processor directives*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int move_west(int* y)
{
    *y = *y - 1;

    return 1;
}
