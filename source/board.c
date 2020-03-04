/*
** EPITECH PROJECT, 2019
** board_functions.c
** File description:
** source file of board relared functions
*/
#include <stdlib.h>
#include <unistd.h>
#include "strings.h"
#include "clear.h"

char get_player(int n)
{
    if (n == 1) {
        return ('X');
    }
    else if(n == 2) {
        return ('O');
    }
    else {
        return ('\0');
    }
}
int get_play(int player)
{
    int result = 0;
    char result_str[2];
    my_putstr("Player #");
    my_putnbr(player);
    my_putstr("'s turn: ");
    result = gecko_read(result_str);
    if(*result_str == 'q')
    {
        exit(0);
    }
    result = *result_str - 48;
    return (result);
}
char **initialize_array()
{
    char **array;

    array = malloc(sizeof(char *) * 7);
    for(int i = 0; i < 6; i++) {
        array[i] = malloc(sizeof(char) * 8);
    }
    array[6] = NULL;
    for (int i = 0 ; i < 6; i++ ) {
        for (int j = 0;j < 7; j++) {
            array[i][j] = '-';
        }
        array[i][7] ='\0';
    }
    return (array);
}

int is_ended(char **arr)
{
    int ended = 1;
    
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 7 ; j++) {
            if (arr[i][j] == '-') {
                ended = 0;
                return (ended);
            }
        }
    }
    return ended;
}
void show_game(char **game_array)
{
    int counter_y;

    clear();
    counter_y = 0;
    printf("=============================\n");
    printf("| 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");
    printf("=============================\n");
    while (counter_y < 6) {
        printf("| %c | %c | %c | %c | %c | %c | %c |\n",
               game_array[counter_y][0], game_array[counter_y][1],
               game_array[counter_y][2], game_array[counter_y][3],
               game_array[counter_y][4], game_array[counter_y][5],
               game_array[counter_y][6]);
        counter_y++;
    }
    printf("=============================\n");
    printf("\n");
}
int insert_number(char **game_array, int *player)
{
    int pos = -1;
    
    while (pos < 0 || pos > 6) {
        pos = get_play(*player) - 1;
        pos = put_number(game_array,pos,*player);
        show_game(game_array);
        
    }
}
char **array_dup(char **arr)
{
    char ** result = initialize_array();
    for (int i = 0; i < 6; i ++) {
        for (int j = 0; j < 7 ; j++) {
            result[i][j] = arr[i][j];
        }
    }
    return (result);
}
void show_steps(char **arr, char c, int x, int y)
{
    char **temp = array_dup(arr);
    for (int i = 0; i < x ; i++) {
        temp[i][y] = c;
        if (i > 0) {
            temp[i - 1][y] = '-';
        }
        clear();
        show_game(temp);
        usleep(50000);
        
    }
}
int put_number(char **arr, int n, int player)
{
    int done = 0;
    char symbol = get_player(player);

    if (symbol == '\0') {
        return (-1);
    }
    if (n > 6) {
        return (-1);
    }
    for (int i = 5 ; i >= 0; i--)
    {
        if (arr[i][n] == '-') {
            
            show_steps(arr, symbol, i, n);
            arr[i][n] = symbol;
            
            return (1);
        }
    }
    return (-1);
}
