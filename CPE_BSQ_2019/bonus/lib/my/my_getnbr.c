/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** Day04
*/

#include <stdio.h>

void my_put_nbr(int nb);
void my_putchar(char c);

int my_getnbr(char const *str)
{
    int i = 0;
    int x = 0;
    int res = 0;

    while (str[i] < '1' || str[i] > '9') {
        if (str[i] == '-')
            x = x + 1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = res + (str[i] - 48);
        res = res * 10;
        i++;
    }
    if (x % 2 != 0)
        res = res * (-1);
    res = res / 10;
    res = res * (-1);
}
