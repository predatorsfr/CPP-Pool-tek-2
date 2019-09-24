/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** FruitBox.cpp
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size)
{
    _size = size;
    _f = NULL;
}

int FruitBox::nbFruits()
{
    FruitNode *current = _f;
    int i = 0;

    while (current != NULL) {
        i++;
        current = current->next;
    }
    return i;
}

bool FruitBox::putFruit(Fruit *f)
{
    FruitNode *current = _f;
    FruitNode *insert = new FruitNode();
    insert->data = f;
    insert->next = NULL;
    if (nbFruits() == _size)
    return false;
    if (current == NULL) {
        _f = insert;
    return (true);
}
        while (current->next  != NULL) {
            if (current->data->getName() == f->getName())
            return false;
            current = current->next;
        }
    current->next = insert;
    return true;
}

Fruit *FruitBox::pickFruit()
{
    FruitNode *current = _f;
    _f = _f->next;
    return current->data;
}

FruitNode *FruitBox::head()
{
    return _f;
}
