/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Droid.hpp
*/

#include <string>
#include <iostream>

#ifndef DROID_H
#define DROID_H

class Droid
{
private:
    std::string _serial;
    std::string *_status;
    std::size_t _energy;
    const std::size_t _attack = 25;
    const std::size_t _toughness = 15;
public:
    Droid(std::string = "");
    Droid(const Droid &);
    void setId(std::string);
    void setEnergie(std::size_t);
    void setStatus(std::string *);
    std::string getId() const;
    std::size_t getEnergie() const;
    std::string *getStatus() const;
    std::size_t getAttack() const;
    std::size_t getThoughness() const;
    bool operator==(const Droid &op) const;
    bool operator!=(const Droid &op) const;
    Droid &operator=(const Droid &op);
    Droid &operator<<(size_t &op);
    ~Droid();
};

std::ostream &operator<<(std::ostream &s, Droid &op);

#endif
