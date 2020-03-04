/*
** EPITECH PROJECT, 2019
** check_functions.c
** File description:
** source code of checking related functions
*/

#include <stdio.h>

int check_horizontal(char **game_array, char c)
{
    int count = 0;
    
    for (int i = 0; i < 6 ; i ++) {
        count = 0;
        for (int j = 0; j < 7 ; j++) {
            if (game_array[i][j] == c) {
                count ++;
            }
            else{
                count = 0;
            }
            if (count >= 4) {
                return (1);
            }
        }
    }
    return (0);
}

int check_vertical(char **game_array, char c)
{
    int count = 0;
    
    for (int j = 0; j < 7 ; j ++) {
        count = 0;
        for (int i = 0; i < 6 ; i++) {
            if (game_array[i][j] == c) {
                count ++;
            }
            else{
                count = 0;
            }
            if (count >= 4) {
                return (1);
            }
        }
    }
    return (0);
}
int check_d_down(char **game_array, char c, int x, int y)
{
    int result = 1;
    for (int i = 0; i < 4; i++) {
        if(x + i >= 6 || y + i >= 7) {
            return (0);
        }
        if (game_array[x + i][y + i] != c) {
            result = 0;
            return (result);
        }
    }
    printf("down: %d\n", result);
    return (result);
}
int check_d_up(char **game_array, char c, int x, int y)
{
    int result = 1;
    for (int i = 0; i < 4; i++) {
        if(x + i >= 6 || y - i < 0) {
            return (0);
        }
        if (game_array[x + i][y - i] != c) {
            result = 0;
            return (result);
        }
    }
    printf("up: %d\n", result);
    return (result);
}
int check_diagonal(char **game_array,char c)
{
    int count_d = 0;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7 ;j++) {
            int down =  check_d_down(game_array, c, i, j);
            int up = check_d_up(game_array, c, i, j);

            if (up || down) {
                return (1);
            }
        }
    }
    return(0);
}

int my_check_winner(char **game_array, int player)
{
    char symbols[2] = {'X', 'O' };
    char symbol = symbols[player - 1];

    if (check_horizontal(game_array, symbol) == 1) {
        
        return (player);
    }
    if (check_vertical(game_array, symbol) == 1) {
       
        return (player);
    }
    if (check_diagonal(game_array, symbol) == 1) {
        return (player);
    }
    return (0);
    
}
