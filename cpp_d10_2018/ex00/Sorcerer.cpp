/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Sorcerer.cpp
*/

#include "Sorcerer.hpp"

Sorcerer::Sorcerer (const std::string &name, const std::string &title)
{
    _name = name;
    _title = title;
    std::cout << name << ", " << title <<  ", is born!" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

void Sorcerer::polymorph (const Victim &victim) const
{
    victim.getPolymorphed();
}

std::ostream &operator<<(std::ostream &my_os, const Sorcerer &Sorcerer)
{
    std::cout << "I am " << Sorcerer.getName() << ", " << Sorcerer.getTitle() << ", and I like ponies!" << std::endl;
    return (my_os);
}
