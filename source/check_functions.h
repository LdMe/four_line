/*
** EPITECH PROJECT, 2019
** check_functions.h
** File description:
** header containing check functions for the game
*/
#ifndef CHECK_FUNCTIONS
#define CHECK_FUNCTIONS
int check_horizontal(char**, char);
int check_vertical(char**, char);
int check_d_up(char**, char, int, int);
int check_d_down(char** ,char, int, int);
int check_diagonal(char**,char);
int my_check_winner(char**,int);
#endif
