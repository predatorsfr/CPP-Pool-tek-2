/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Victim.cpp
*/

#include "Victim.hpp"

Victim::Victim (const std::string &name)
{
    _name = name;
    std::cout << "Some random victim called " << name << " just popped!" << std::endl;
}

Victim::~Victim(void)
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

void Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &my_os, const Victim &Victim)
{
    my_os << "I'm " << Victim.getName() << " and i like otters!" << std::endl;
    return (my_os);
}
