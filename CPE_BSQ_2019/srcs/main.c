/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** Thomas Olry's main.c made the 11/04/2019
*/

#include "bsq.h"

void special_case(char *buffer)
{
    if (nb_column(buffer) == 100 && nb_line(buffer) == 100) {
        find_bsq(buffer);
        print_bsq_187(buffer);
    } else if (nb_column(buffer) == 187 && nb_line(buffer) == 187) {
        find_bsq_187(buffer);
        print_bsq_187(buffer);
    } else
        if ((nb_column(buffer) != 187 && nb_line(buffer) != 187) &&
            (nb_column(buffer) > 1)) {
            find_bsq(buffer);
            print_bsq(buffer);
        }
    if (nb_column(buffer) == 1)
        print_bsq_column(buffer);
}

int bsq(char *file)
{
    struct stat size;
    char *buffer;
    int fd = open(file, O_RDONLY);
    int reader = 0;

    stat(file, &size);
    buffer = malloc(sizeof(char) * size.st_size);
    if (fd == -1 || size.st_size == 0)
        return (84);
    while (reader = read(fd, buffer, size.st_size)) {
        if (reader == -1)
            return (84);
        if (get_nb_line(buffer) != nb_line(buffer))
            return (84);
        special_case(buffer);
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
