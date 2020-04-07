/*
** EPITECH PROJECT, 2019
** bsq_187.c
** File description:
** Thomas Olry's bsq_187.c made the 11/12/2019
*/

#include "bsq.h"

char *find_bsq_187(char *buffer)
{
    buffer = replace_by_one_and_zero(buffer);
    buffer = find_the_square_187(buffer);
    buffer = print_square_187(buffer);
    return (buffer);
}

void print_bsq_187(char *buffer)
{
    int i = 0;

    for (; buffer[i] != '\n'; i++);
    i += 1;
    for (; buffer[i + 2] != '\0'; i++) {
        switch (buffer[i])
        {
        case '0':
            my_putchar('o');
            break;
        case '\n':
            my_putchar('\n');
            break;
        case 'x':
            my_putchar('x');
            break;
        default:
            my_putchar('.');
        }
    }
}

char *find_the_square_187(char *buf)
{
    int len = nb_column(buf) + 1;
    int i = len_first_line(buf) + len;
    int nb = len + 1;

    for (; buf[i - 2] != '\n'; i++);
    for (; buf[i + 1] != '\0'; i++) {
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

int save_pos_187(char *buffer)
{
    int save = 0;
    int nb = 0;
    int i = 0;

    for (; buffer[i] != '\n'; i++);
    for (; buffer[i + 1] != '\0'; i++) {
        if (buffer[i] > nb && buffer[i] != '\n') {
            save = i;
            nb = buffer[i];
        }
    }
    return (save);
}

char *print_square_187(char *buffer)
{
    int i = save_pos_187(buffer);
    int k = buffer[save_pos_187(buffer)] - 48;
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
