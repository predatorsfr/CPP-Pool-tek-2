/*
** EPITECH PROJECT, 2019
** cpp_d06
** File description:
** ex02
*/

#include <strings.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <iterator>
#include <regex>

#ifndef KOALA_H
#define KOALA_H

class SickKoala
{
private:
    std::string name;
public:
    SickKoala(std::string);
    void poke();
    bool takeDrug(std::string);
    void overDrive(std::string);
    ~SickKoala();
};

#endif
