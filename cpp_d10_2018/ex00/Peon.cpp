/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Peon.cpp
*/

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name)
{
    _name = name;
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony!" << std::endl;
}
