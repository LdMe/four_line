/*
** EPITECH PROJECT, 2019
** my_connect_four
** File dnescription:
** 2 player game
*/
#include <stdio.h>
#include <unistd.h>
#include "check_functions.h"
#include "board.h"

int play_once(char **game_array,int *player)
{

    insert_number(game_array, player);
    *player = 3 - *player;
    return (0);
}

int main()
{
    char **game_array;
    int player = 1;
    int winner = 0;

    game_array = initialize_array();
    
    show_game(game_array);
    while (is_ended(game_array) != 1 &&  winner == 0) {
        play_once(game_array,&player);
        winner = my_check_winner(game_array, 3 - player);
    }
    if (winner == 0) {
        printf("It's a draw!\n");
    } else {
        printf("Congratulations Player #%d, you win !\n",winner);
    }
    usleep(2000000);
}
