/*
** EPITECH PROJECT, 2019
** tab_to_2dtab
** File description:
** tab_to_2dtab
*/
#include "stdlib.h"
#include "stdio.h"

void tab_to_2dtab(const int *tab, int length, int width, int ***res)
{
    int k = 0;

    *res = malloc(sizeof(int **) * length * width + 1);
    for (int i = 0;length != i; i++) {
        (*res)[i] = malloc(sizeof(int *) * length * width + 1);
        for (int j = 0; width != j; j++) {
            (*res)[i][j] = tab[k];
            k++;
        }
    }
}
