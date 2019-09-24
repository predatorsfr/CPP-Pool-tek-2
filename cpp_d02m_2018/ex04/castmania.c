/*
** EPITECH PROJECT, 2019
** tab_to_2dtab
** File description:
** tab_to_2dtab
*/

#include "castmania.h"
#include <stdio.h>

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *val = (instruction_t *)data;
    addition_t *add;
    division_t *divi;
    integer_op_t *inte;
    decimale_op_t *deci;

    if (instruction_type == 2) {
        exec_add(add = (addition_t *)val->operation);
        if (val->output_type == 1)
            printf("%d\n", add->add_op.res);
    } else if (instruction_type == 3) {
        exec_div(divi = (division_t *)val->operation);
        if (val->output_type == 1 && divi->div_type == 0) {
            inte = (integer_op_t *)divi->div_op;
            printf("%d\n", inte->res);
        } else if (val->output_type == 1 && divi->div_type == 1) {
            deci = (decimale_op_t *)divi->div_op;
            printf("%f\n", deci->res);
        }
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    float *val;
    int *vali;

    if (instruction_type == 1) {
        val = (float *)data;
        printf("%f\n", *val);
    }
    if (instruction_type == 0) {
        vali = (int *)data;
        printf("%d\n", *vali);
    } else
        exec_operation(instruction_type, data);
}
