/*
** EPITECH PROJECT, 2019
** tab_to_2dtab
** File description:
** tab_to_2dtab
*/

#include "castmania.h"

int normal_add(int a, int b)
{
    return (a+b);
}

int absolute_add(int a, int b)
{
    if (a < 0)
        a = a * -1;
    if (b < 0)
        b = b * -1;
    return (a+b);
}

void exec_add(addition_t *ope)
{
    if (ope->add_type  == 0) {
        ope->add_op.res = normal_add((ope->add_op.a), (ope->add_op.b));
    } else {
        ope->add_op.res = absolute_add((ope->add_op.a), (ope->add_op.b));
    }
}
