/*
** EPITECH PROJECT, 2019
** white_rabbit
** File description:
** follow_the_white_rabbit
*/
#include "stdio.h"
#include "stdlib.h"

int follow_the_white_rabbit(void)
{
    int d = 0;
    int r = 0;

    while (1) {
        d = random() % 37 + 1;
        r = r + d;
        if (d == 1 || d == 37 || r >= 397)
            break;
        if (d == 8 || d == 16 || d == 24 || d == 26 || d == 32)
            printf("backward\n");
        if (d == 10 || d == 15 || d == 23)
            printf("forward\n");
        if (d == 13 || (d >= 34 && d < 37))
            printf("right\n");
        if (d == 4 || d == 5 || (d >= 18 && d <= 21)
            || d == 6 || d == 17 || d == 28)
            printf("left\n");
    }
    printf("RABBIT!!!\n");
    return (r);
}
