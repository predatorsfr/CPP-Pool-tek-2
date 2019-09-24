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
    return _pics._data;
}
bool Toy::setAscii(const std::string &file)
{
    return(_pics.getPictureFromFile(file));
}

Toy::Toy() : _type(BASIC_TOY), _name("toy") {};

Toy::Toy(enum ToyType type, std::string name, std::string file)
: _type(type), _name(name), _pics(file) {};

Toy::Toy(const Toy &Toys)
{
    _type = Toys._type;
    _name = Toys._name;
    _pics = Toys._pics;
}

Toy::~Toy()
{

}

Toy &Toy::operator=(const Toy &Toys)
{
    _type = Toys.getType();
    _name = Toys.getName();
    _pics = Toys.getAscii();

    return (*this);
}
