/*
** EPITECH PROJECT, 2019
** add_mul
** File description:
** add_mul
*/

#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

int main (int ac, char **av)
{
    std::string temp;
    float j = 0;

    std::cin >> j >> temp;

    if (temp[0] == 'C') {
        j = ((j * 9) / 5) + 32;
        std::cout.width(16);
        std::cout << std::right << std::fixed;
        std::cout << std::setprecision(3) << j << '\t' << temp <<std::endl;
    }
    if (temp[0] == 'F') {
        j = ((j - 32) * 5) / 9;
        std::cout.width(16);
        std::cout << std::right << std::fixed;
        std::cout << std::setprecision(3) << j << '\t' << temp <<std::endl;
    }
}
