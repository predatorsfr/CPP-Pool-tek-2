/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** toy.hpp
*/

#ifndef _TOY_HPP__
#define _TOY_HPP__

#include "Picture.hpp"
#include <iostream>
#include <string>

class Toy {
public:
    enum ToyType {
        BASIC_TOY,
        ALIEN,
    };
    ToyType getType() const;
    std::string getName() const;
    std::string getAscii() const;
    void setName(const std::string name);
    bool setAscii(const std::string &file);
    Toy();
    Toy(enum ToyType type, std::string name, std::string file);
protected:
    ToyType _type;
        std::string _name;
        Picture _pics;

};

#endif
