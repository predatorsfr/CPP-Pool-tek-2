/*
** EPITECH PROJECT, 2019
** add_mul
** File description:
** add_mul
*/
#include <mem_ptr.h>
#include "stdlib.h"
#include "string.h"
#include "stdio.h"

 void add_str(const char *str1, const char *str2, char **res)
 {
    *res = malloc(sizeof(char*) * strlen(str1) * strlen(str2));
    res[0][0] = '\0';
    *res = strcat(*res, str1);
    *res = strcat(*res, str2);
 }
 void add_str_struct ( str_op_t * str)
 {
    str->res = malloc(sizeof(char*) * strlen(str->str1) * strlen(str->str2));
    str->res[0] = '\0';
    str->res = strcat(str->res, str->str1);
    str->res = strcat(str->res, str->str2);
 }
