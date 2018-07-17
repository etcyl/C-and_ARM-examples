/*Pre-processor directives*/                                                        
#include <stdlib.h>                                                                 
#include <stdio.h>                                                                  
#include <string.h>                                                                 
#include "w_follow.h"
                                                                                    
int facing_north(char** maze, int* current_x, int* current_y, int exit_x, int exit_y)
{                                                                                   
    /*Can you move east and then face that direction?*/                             
    if(check_east(maze, *current_x, *current_y))                                                
      {                                                                             
       /*Yes, so update current position and put a W there*/                        
       move_east(current_y);                                                 
       write_w(maze, *current_x, *current_y);                                                   
       /*Is this new position the exit?*/                                           
       if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                   
         return 0; /*Yes, so return with the solution state*/                       
                                                                                    
       return 4; /*No, return with (facing) "East" state*/                          
      }                                                                             
    /*Can you move north and then face that direction?*/                            
    else if(check_north(maze, *current_x, *current_y))                                          
       {                                                                            
        /*Yes, so update current position and put a W there*/                       
        move_north(current_x);                                                
        write_w(maze, *current_x, *current_y);                                                  
        /*Is this new position the exit?*/                                          
        if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                  
          return 0; /*Yes, so return with the solution state*/                      
                                                                                    
        return 2; /*No, return with (facing) "North" state*/                        
       }                                                                            
    else if(check_west(maze, *current_x, *current_y))                                           
      {                                                                             
       /*Yes, so update current position and put a W there*/                        
       move_west(current_y);                                                 
       write_w(maze, *current_x, *current_y);                                                   
       /*Is this new position the exit?*/                                           
       if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                   
         return 0; /*Yes, so return with the solution state*/                       
                                                                                    
       return 3;/*No, return with (facing) "West" state*/                          
      }                                                                             
    else                                                                            
      {                                                                             
      /*Can't move right (east), forward (north), or left (west), so go             
        backwards (south)                                            */             
      move_south(current_x);                                                 
      write_w(maze, *current_x, *current_y);                                                    
      /*Is this new position the exit?*/                                            
      if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                    
        return 0; /*Yes, so return with the solution sate*/                         
                                                                                    
      return 1; /*No, return with (facing) "South" state*/                          
                                                                                    
      }                                                                             
}                                                                                   
