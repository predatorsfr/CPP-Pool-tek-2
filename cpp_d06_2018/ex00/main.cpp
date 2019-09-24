/*
** EPITECH PROJECT, 2019
** add_mul
** File description:
** add_mul
*/

#include <fstream>
#include <string>
#include <iostream>

int main(int ac, char **av)
{
    std::string str;

    if(ac < 2)
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
    else {
        for(int i = 1 ; av[i] != NULL ; i++) {
            std::ifstream file(av[i], std::ios::in);
            if (!file)
                std::cerr << "my_cat: "  << av[i]
                          << ": No such file or directory" << std::endl;
            while(getline(file, str))
                std::cout << str << std::endl;
        }
    }
}
