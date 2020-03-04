/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** function that takes a string as parameter and displays it on the standard output
*/
#include <unistd.h>
void my_putchar(char c)
{
    write(1,&c,1);
}

void my_putstr(char *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
}

