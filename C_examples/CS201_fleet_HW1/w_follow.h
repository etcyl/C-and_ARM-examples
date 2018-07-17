#ifndef W_FOLLOW_H
#define W_FOLLOW_H

int create_maze(char* argv, char*** maze, int* start_y, int* start_x, int* exit_x, int* exit_y, int* num_rows, int* num_columns);

int print_maze(char** maze, int num_rows, int num_columns);

int wall_follower(char** maze, int current_x, int current_y, int exit_x, int exit_y);

int facing_south(char** maze, int* current_x, int* current_y, int exit_x, int exit_y); 

int facing_north(char** maze, int* current_x, int* current_y, int exit_x, int exit_y); 

int facing_west(char** maze, int* current_x, int* current_y, int exit_x, int exit_y); 

int facing_east(char** maze, int* current_x, int* current_y, int exit_x, int exit_y);

int check_south(char** maze, int x, int y);

int check_north(char** maze, int x, int y);

int check_west(char** maze, int x, int y);

int check_east(char** maze, int x, int y); 

int move_south(int* y);

int move_north(int* y);

int move_west(int* x);

int move_east(int* x);

void write_w(char** maze, int x, int y);

int check_sol(char** maze, int x, int y, int e_x, int e_y);

int rm_maze(char** maze, int num_rows);

#endif
