/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** ex00.h
*/

#ifndef DROID_H
#define DROID_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_cthulhu {
    int m_power;
    char *m_name;
} cthulhu_t ;

typedef struct s_koala {
    cthulhu_t m_parent;
    char m_is_a_legend;
} koala_t;

cthulhu_t *new_cthulhu();
koala_t *new_koala(char *name, char is_a_legend);
void print_power(cthulhu_t *this);
void attack(cthulhu_t *this);
void sleeping(cthulhu_t *this);
void eat(koala_t *this);
#endif
