/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Sorcerer.hpp
*/

#include <string>
#include <iostream>
#include <Victim.hpp>

#ifndef SORCERER_H
#define SORCERER_H

class Sorcerer {
private:
    std::string _name;
    std::string _title;
public:
    Sorcerer (const std::string &name, const std::string &title);
    ~Sorcerer();
    void polymorph (const Victim &victim) const;
    std::string getName() const {return _name;};
    std::string getTitle() const {return _title;};
};

std::ostream &operator<<(std::ostream &my_os, const Sorcerer &Sorcerer);

#endif
