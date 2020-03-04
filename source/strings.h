/*
** EPITECH PROJECT, 2019
** strings.h
** File description:
** header of string -related functions
*/

#ifndef STRINGS_
#define STRINGS

#include <unistd.h>
void my_putstr(char *str);
void my_putnbr(int n);
int put_number(char **arr, int n, int player);
int gecko_read(char *str)
{
    return (read(0,str,2));
}
#endif
