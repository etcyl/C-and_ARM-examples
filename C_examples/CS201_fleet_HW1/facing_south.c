 /*Pre-processor directives*/                                                                
 #include <stdlib.h>                                                                          
 #include <stdio.h>                                                                        
 #include <string.h>                                                                            
 #include "w_follow.h"
                                                                                               
 int facing_south(char** maze, int* current_x, int* current_y, int exit_x, int exit_y)                 
 {                                                                                                    
     /*Can you move west and then face that direction?*/                                        
     if(check_west(maze, *current_x, *current_y))                                                       
       {                                                                                      
        /*Yes, so update current position and put a W there*/                                
        move_west(current_y);                                                      
        write_w(maze, *current_x, *current_y);                                                        
        /*Is this new position the exit?*/                                                
        if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                         
          return 0; /*Yes, so return with the solution state*/                          
                                                                                            
        return 3; /*No, return with (facing) "West" state*/                                 
       }                                                                                       
     /*Can you move south and then face that direction?*/                                        
     else if(check_south(maze, *current_x, *current_y))                                                       
        {                                                                                
         /*Yes, so update current position and put a W there*/                         
         move_south(current_x);                                                        
         write_w(maze, *current_x, *current_y);                                                       
         /*Is this new position the exit?*/                                                 
         if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                         
           return 0; /*Yes, so return with the solution state*/                                       
                                                                                                         
         return 1; /*No, return with (facing) "South" state*/                                      
        }                                                                                                 
     else if(check_east(maze, *current_x, *current_y))                                                               
       {                                                                                                    
        /*Yes, so update current position and put a W there*/                                
        move_east(current_y);                                                        
        write_w(maze, *current_x, *current_y);                                                           
        /*Is this new position the exit?*/                                                      
        if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                               
          return 0; /*Yes, so return with the solution state*/                                 
                                                                                                
        return 4; /*No, return with (facing) "East" state*/                                      
       }                                                                                     
     else                                                                                  
       {                                                                             
       /*Can't move right (west), forward (south), or left (east), so go                            
         backwards (north)                                            */                              
       move_north(current_x);                                                          
       write_w(maze, *current_x, *current_y);                                                    
       /*Is this new position the exit?*/                                                     
       if(check_sol(maze, *current_x, *current_y, exit_x, exit_y))                                
         return 0; /*Yes, so return with the solution sate*/                                       
                                                                                                 
       return 2; /*No, return with (facing) "North" state*/                                    
                                                                                             
       }                                                                                          
 }                                                                                                 
