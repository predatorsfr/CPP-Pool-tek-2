/*
** EPITECH PROJECT, 2019
** menger sponge
** File description:
** menger
*/

#include "menger.h"
#include <stdio.h>
#include <stdlib.h>

int square(int length, int ss, char *av)
{
    int a = ss;
    int o = ss;

    while (length != 0) {
        ss = ss/3;
        a = ss;
        o = ss;
        printf("%.3d %.3d %.3d\n",ss,a,o);
        length--;
    }
    if (my_atoi(av) > 1) {
        for (int i = 1; i != 3 ; i++) {
            o = o + 3;
            printf("%.3d %.3d %.3d\n",ss,a,o);
        }
        printf("%.3d %.3d %.3d\n",ss,a+3,o-6);
        printf("%.3d %.3d %.3d\n",ss,a+3,o);
        for (int i = 1; i != 4 ; i++) {
            printf("%.3d %.3d %.3d\n",ss,a+6,o-6);
            o = o + 3;
        }
    }
    return (0);
}
