/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Peon.hpp
*/

#include <string>
#include <iostream>
#include <Victim.hpp>

#ifndef PEON_H
#define PEON_H

class Peon : public Victim
{
public:
    Peon (const std::string &name);
    ~Peon ();
    void getPolymorphed() const;
};

#endif
