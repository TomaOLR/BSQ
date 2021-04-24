/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Thomas Olry's main.c made the 11/04/2019
*/

#include "bsq.h"

void check_if_its_column(char *buffer)
{
    if (nb_column(buffer) == 187 && nb_line(buffer) == 187) {
        find_bsq_187(buffer);
        print_bsq_187(buffer);
    } else if (nb_column(buffer) != 187 && nb_line(buffer) != 187 &&
               (nb_column(buffer) > 1)) {
        find_bsq(buffer);
        print_bsq(buffer);
    } else
        print_bsq_col(buffer);
}

int bsq(char *file)
{
    struct stat size;
    char *buffer;
    int fd = open(file, O_RDONLY);
    int reader = 0;

    stat(file, &size);
    if (fd == -1)
        return (84);
    buffer = malloc(sizeof(char) * size.st_size);
    while (reader = read(fd, buffer, size.st_size)) {
        if (reader == -1)
            return (84);
        check_if_its_column(buffer);
    }
    reader = close(fd);
    if (reader == -1)
        return (84);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (bsq(av[1]) == 84)
        return (84);
}
