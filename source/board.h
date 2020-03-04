/*
** EPITECH PROJECT, 2019
** board.h
** File description:
** header with board related functions
*/
#ifndef BOARD_
#define BOARD_
#include <stdlib.h>
#include <stdio.h>

char get_player(int);
int get_play(int);
char **initialize_array();
int is_ended(char**);
void show_game(char**);
int insert_number(char**, int*);
int put_number(char**,int,int);
#endif
