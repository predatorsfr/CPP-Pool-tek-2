/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** droid.cpp
*/

#include "Droid.hpp"

Droid::Droid(std::string id)
{

    _serial = id;
    _status = new std::string("Standing by");
    _energy = 50;
    std::cout << "Droid '" << _serial << "' Activated" << std::endl;
}

Droid::Droid(const Droid &d)
{
    _serial = d._serial;
    _energy = d._energy;
    _status = d._status;
    std::cout << "Droid '" << _serial << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    std::cout << "Droid '" << _serial << "' Destroyed" << std::endl;
}

void Droid::setId(std::string id)
{
    _serial = id;
}

void Droid::setEnergie(std::size_t energy)
{
    _energy = energy;
}

void Droid::setStatus(std::string *status)
{
    _status = status;
}

std::size_t Droid::getAttack() const
{
    return (_attack);
}

std::size_t Droid::getThoughness() const
{
    return (_toughness);
}

std::string Droid::getId() const
{
    return(_serial);
}

std::size_t Droid::getEnergie() const
{
    return(_energy);
}

std::string *Droid::getStatus() const
{
    return(_status);
}

bool Droid::operator==(const Droid &op) const
{
    if (_serial == op.getId() && _status == op.getStatus() && _energy == op.getEnergie())
    return (true);
    return (false);
}

bool Droid::operator!=(const Droid &op) const
{
    if (*this == op)
    return (false);
    return (true);
}

Droid &Droid::operator=(const Droid &op)
{
    _status = op.getStatus();
    _energy = op.getEnergie();
    _serial = op.getId();

    return (*this);
}

Droid &Droid::operator<<(size_t &op)
{
    size_t nb = 100 - _energy;
    if (op > nb) {
        op -= nb;
        _energy += nb;
        return (*this);
    }
    _energy += op;
    op = 0;
    return(*this);
}

std::ostream &operator<<(std::ostream &s, Droid &op)
{
    s << "Droid '" << op.getId() << "', " << *op.getStatus() << ", " << op.getEnergie();
    return (s);
}
