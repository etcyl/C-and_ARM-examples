  /*Pre-processor directives*/                                           
  #include <stdlib.h>                                                   
  #include <stdio.h>                                                    
  #include <string.h>                                                   
                                                                        
  int check_north(char** maze, int x,  int y)                          
   {                                                                     
    if(maze[x - 1][y] == '0' || maze[x - 1][y] == 'W') 
       return 1;                                                         
                                                                         
     return 0;                                                           
   }                                                                     
