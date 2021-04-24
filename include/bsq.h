/*
** EPITECH PROJECT, 2019
** bsq.h
** File description:
** Thomas Olry's bsq.h made the 11/04/2019
*/

#ifndef BSQ_H_
#define BSQ_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

char *replace_by_one_and_zero(char *buffer);
int find_smallest(int a, int b, int c);
char *find_the_square(char *buffer);
int save_pos(char *buf);
char *print_square(char *buffer);

char *find_bsq(char *buffer);
void print_bsq(char *buffer);
int print_bsq_column(char *buffer);

int len_first_line(char *buffer);
int nb_column(char *buffer);
int nb_line(char *buffer);
int get_nb_line(char *buffer);

void special_case(char *buffer);
int bsq(char *file);

int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_putchar(char c);

void print_bsq_187(char *buffer);
char *find_bsq_187(char *buffer);
char *find_the_square_187(char *buf);
int save_pos_187(char *buffer);
char *print_square_187(char *buffer);

#endif  /* BSQ_H_ */
