/*
** EPITECH PROJECT, 2019
** castmania
** File description:
** div
*/

#include "castmania.h"

int integer_div(int a ,int b)
{
    if (b == 0)
        return (0);
    return (a / b);
}

float decimale_div(int a ,int b)
{
    float euc;
    if (b == 0)
        return (0);
    euc = (float)a /b;
    return (euc);
}

void exec_div(division_t *operation)
{
    integer_op_t *inte;
    decimale_op_t *deci;

    if (operation->div_type == 0) {
        inte = (integer_op_t *)operation->div_op;
        inte->res = integer_div((inte->a),(inte->b));
    } else {
        deci = (decimale_op_t *)operation->div_op;
        deci->res = decimale_div((deci->a),(deci->b));
    }
}
