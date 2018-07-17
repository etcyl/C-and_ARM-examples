  /*Pre-processor directives*/                                             
  #include <stdlib.h>                                                  
  #include <stdio.h>                                                   
  #include <string.h>                                                  
                                                                        
  int check_east(char** maze, int x,  int y)                         
   {                                                                   
    if(maze[x][y + 1] == '0' || maze[x][y + 1] == 'W')
       return 1;                                                       
                                                                       
     return 0;                                                         
   }                                                                   
