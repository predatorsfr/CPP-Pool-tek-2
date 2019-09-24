/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** main.cpp
*/
# include <iostream>
# include "ex01/Toy.hpp"
int main ()
{
    Toy toto ;
    Toy ET(Toy::ALIEN, "green", "") ;
    toto.setName ("TOTO !") ;
    if (toto.getType() == Toy::BASIC_TOY )
    std::cout << " basic toy: " << toto.getName() << std::endl
    << toto.getAscii() << std::endl ;
    if (ET.getType() == Toy::ALIEN )
    std::cout << " this alien is: " << ET.getName() << std::endl
    << ET.getAscii() << std::endl ;
    return 0;
}
