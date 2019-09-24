/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Skat.hpp
*/

#include <strings.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <iterator>
#include <regex>


#ifndef SKAT_H
#define SKAT_H

class Skat
{
public:
    Skat(const std::string & name, int stimPaks);
    ~ Skat();
    [...] stimPaks();
    const std::string & name();
    void shareStimPaks (int number, [...] stock);
    void addStimPaks (unsigned int number);
    void useStimPaks ();
    void status ();
private:
    [...]
};

#endif
