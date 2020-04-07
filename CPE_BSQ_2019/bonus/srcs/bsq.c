/*
** EPITECH PROJECT, 2019
** bsq.c
** File description:
** Thomas Olry's bsq.c made the 11/04/2019
*/

#include "bsq.h"

char *find_bsq(char *buffer)
{
    buffer = replace_by_one_and_zero(buffer);
    buffer = find_the_square(buffer);
    buffer = print_square(buffer);
    return (buffer);
}

void print_bsq(char *buffer)
{
    int i = 0;

    for (; buffer[i] != '\n'; i++);
    i += 1;
    for (; buffer[i] != '\0'; i++) {
        switch (buffer[i])
        {
        case '0':
            my_putstr("\e[35;1mo\e[0m"); break;
        case '\n':
            my_putstr("\n");; break;
        case 'x':
            my_putstr("\e[43;1mx\e[0m"); break;
        default:
            my_putstr("\e[34;1m.\e[0m");
        }
    }
}

int print_bsq_col(char *buffer)
{
    int i = 0;

    for (; buffer[i] != '\n'; i++);
    i += 1;
    for (; buffer[i] != '.'; i++) {
        my_putchar(buffer[i]);
        if (buffer[i + 1] == '\0')
            return (0);
    }
    my_putchar('x');
    i++;
    for (; buffer[i] != '\0'; i++)
        my_putchar(buffer[i]);
}
