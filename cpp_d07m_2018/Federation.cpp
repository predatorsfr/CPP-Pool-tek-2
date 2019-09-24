/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Federation.cpp
*/

#include "WarpSystem.hpp"
#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp)
{
    this->_name = name;
    this->_length = length;
    this->_width = width;
    this->_maxWarp = maxWarp;

    std::cout << "The ship USS "<< name << " has been finished." << std::endl;
    std::cout << "It is "<< length <<" m in length and " << width << "m in width." << std::endl;
    std::cout << "It can go to Warp " << maxWarp << "!" << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_name = name;
    this->_length = length;
    this->_width = width;
    this->_maxWarp = 1;

    std::cout << "The independant ship "<< name << " just finished its construction." << std::endl;
    std::cout << "It is "<< length <<" m in length and " << width << "m in width." << std::endl;
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *coeur)
{
    _core = coeur;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore(void)
{
    if((_core->checkReactor())->isStable() == false)
    std::cout << "USS " << _name << ": The core is unstable at the time." << std::endl;
    else
    std::cout << "USS " << _name << ": The core is table at the time." << std::endl;

}

void Federation::Ship::setupCore(WarpSystem::Core *coeur)
{
    _core = coeur;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore(void)
{
    if((_core->checkReactor())->isStable() == false)
    std::cout << _name << ": The core is unstable at the time." << std::endl;
    else
    std::cout << _name << ": The core is table at the time." << std::endl;
}
