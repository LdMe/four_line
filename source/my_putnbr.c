/*
** EPITECH PROJECT, 2019
** my_putnbr.c
** File description:
** function to output a number
*/
#include<unistd.h>
void my_putchar(char c);

void my_putnbr(int n)
{
    int order = 1;
    
    if (n == 0) {
        my_putchar('0');
    } else if (n < 0) {
        my_putchar('-');
        n=-n;
    }
    while (order <= n) {
        order = order * 10;
    }
    order = order / 10;
    while (order > 0) {
        int temp = n / order;
        
        n = n % order;
        order = order / 10;
        my_putchar(temp + 48);
    }
}
