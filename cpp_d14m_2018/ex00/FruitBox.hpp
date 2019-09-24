/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** FruitBox.hpp
*/


#ifndef _FRUITBOX_HPP__
#define _FRUITBOX_HPP__

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
protected:
    int _size;
    FruitNode *_f;
public:
    FruitBox(int size);
    int nbFruits();
    bool putFruit(Fruit *f);
    Fruit *pickFruit();
    FruitNode *head();
};

#endif
