/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Victim.hpp
*/

#include <string>
#include <iostream>

#ifndef VICTIM_H
#define VICTIM_H

class Victim {
protected:
    std::string _name;
public:
    Victim (const std::string &name);
    ~Victim ();
    std::string getName() const {return _name;};
    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &my_os, const Victim &Victim);

#endif
