/*
** EPITECH PROJECT, 2019
** stat.c
** File description:
** Thomas Olry's stat.c made the 11/04/2019
*/

#include "bsq.h"

int len_first_line(char *buffer)
{
    int i = 0;

    while (buffer[i] != '\n')
        i++;
    return (i);
}

int nb_column(char *buffer)
{
    int i = 0;
    int len = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    while (buffer[i] != '\n') {
        i++;
        len++;
    }
    return (len);
}

int nb_line(char *buffer)
{
    int j = 0;

    for (int i = 0; buffer[i] != '\0'; i++)
        if (buffer[i] == '\n')
            j++;
    return (j - 1);
}
