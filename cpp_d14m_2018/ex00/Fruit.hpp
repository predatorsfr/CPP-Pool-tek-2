/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Fruit.hpp
*/


#ifndef _FRUIT_HPP__
#define _FRUIT_HPP__

#include <string>
#include <iostream>

class Fruit {
public:
    Fruit(const std::string _name, size_t _vit);
    std::string getName() const {return _name;};
    size_t getVitamins() const {return _vit;};
protected:
    std::string _name;
    size_t _vit;
};

#endif
