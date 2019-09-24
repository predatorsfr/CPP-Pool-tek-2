/*
** EPITECH PROJECT, 2019
** add_mul
** File description:
** add_mul
*/

void add_mul_4param (int first, int second, int *sum, int *product)
{
    *sum = second + first;
    *product = second * first;
}

void add_mul_2param(int *first, int *second)
{
    int firstbuff = *first * *second;
    
    *first = *first + *second;
    *second = firstbuff;
}
