/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** WarpSystem.hpp
*/


#ifndef WARP_H
#define WARP_H

namespace WarpSystem
{
    class QuantumReactor
    {
    public:
        bool _stability = true;
        bool isStable();
        void setStability(bool stability);
    };
    class Core
    {
    public:
        QuantumReactor *_coreReactor;
        Core(QuantumReactor *core);
        QuantumReactor *checkReactor();
    };
}

#endif
