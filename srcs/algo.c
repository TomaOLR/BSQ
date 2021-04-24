/*
** EPITECH PROJECT, 2019
** algo.c
** File description:
** Thomas Olry's algo.c made the 11/04/2019
*/

#include "bsq.h"

char *replace_by_one_and_zero(char *buf)
{
    for (int i = 0; buf[i] != '\0'; i++) {
        if (buf[i] == 'o')
            buf[i] = '0';
        if (buf[i] == '.')
            buf[i] = '1';
    }
    return (buf);
}

int find_smallest(int a, int b, int c)
{
    if (a <= b && a <= c)
        return (a);
    else if (b < a && b < c)
        return (b);
    else
        return (c);
}

char *find_the_square(char *buf)
{
    int len = nb_column(buf) + 1;
    int i = len_first_line(buf) + len;
    int nb = len + 1;

    for (; buf[i - 2] != '\n'; i++);
    for (; buf[i] != '\0'; i++) {
        if (buf[i] == '\n' && len != 2)
            i += 2;
        else if (buf[i] == '\n' && len == 2 && buf[i] != '\0')
            i += 1;
        if (buf[i] == '0')
            buf[i] = '0';
        else
            buf[i] = find_smallest(buf[i - 1], buf[i - len], buf[i - nb]) + 1;
    }
    return (buf);
}

int save_pos(char *buffer)
{
    int save = 0;
    int nb = 0;
    int i = 0;

    for (; buffer[i] != '\n'; i++);
    for (; buffer[i] != '\0'; i++) {
        if (buffer[i] > nb && buffer[i] != '\n') {
            save = i;
            nb = buffer[i];
        }
    }
    return (save);
}

char *print_square(char *buffer)
{
    int i = save_pos(buffer);
    int k = buffer[save_pos(buffer)] - 48;
    int len = nb_column(buffer);
    int j = 1;

    for (int n = 1; n <= k; n++, j = 1) {
        for (; j <= k; j++, i--) {
            buffer[i] = 'x';
        }
        i = save_pos(buffer) - len + (k - 2);
    }
    return (buffer);
}
