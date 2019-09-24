/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Toy.cpp
*/

#include "Toy.hpp"

Toy::ToyType Toy::getType() const
{
    return this->_type;
}
std::string Toy::getName() const
{
    return this->_name;
}
void Toy::setName(const std::string name)
{
    _name = name;
}
std::string Toy::getAscii() const
{
    return _pics.data;
}
bool Toy::setAscii(const std::string &file)
{
    return(_pics.getPictureFromFile(file));
}

Toy::Toy() : _type(BASIC_TOY), _name("toy") {};

Toy::Toy(enum ToyType type, std::string name, std::string file)
: _type(type), _name(name), _pics(file) {};
