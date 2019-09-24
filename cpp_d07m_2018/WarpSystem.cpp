/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** WarpSystem.cpp
*/

#include "WarpSystem.hpp"
#include "Federation.hpp"

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor(void)
{
    return(_coreReactor);
}

WarpSystem::Core::Core(QuantumReactor *coreReactor)
{
    _coreReactor = coreReactor;
}

bool WarpSystem::QuantumReactor::isStable()
{
    if(_stability == true)
    return(true);
    return(false);
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    _stability = stability;
}
