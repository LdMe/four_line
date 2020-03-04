/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** convert a number from string to int
*/

int my_getnbr(char *str)
{
    int number=0;
    while (*str != '\0') {
        number *= 10;
        number += *str -48;
        str++;
    }
    return (number);
}
