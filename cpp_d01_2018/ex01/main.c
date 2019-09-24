/*
** EPITECH PROJECT, 2019
** menger sponge
** File description:
** main
*/

#include "stdio.h"
#include "math.h"
#include "menger.h"

int	my_atoi(char *nbr)
{
    int	i;
    int	res;

    res = 0;
    i = 0;
    if (nbr[0] == '-')
        i++;
    while (nbr[i] >= '0' && nbr[i] <= '9') {
        res = res * 10 + nbr[i] - 48;
        i = i + 1;
    }
    if (nbr[0] == '-')
        res = res * -1;
    return (res);
}

int main(int ac, char **av)
{
    int ss = my_atoi(av[1]);
    int length = my_atoi(av[2]);

    if (pow(my_atoi(av[2]),3) > my_atoi(av[1]) || ac > 3 || ac < 3)
        return (84);
    if (my_atoi(av[2]) == 0) {
        return (0);
    }
    square(length, ss, av[2]);
}
