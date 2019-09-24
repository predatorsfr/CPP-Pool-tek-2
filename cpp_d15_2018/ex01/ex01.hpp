/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** ex01.hpp
*/


#ifndef _EX_HPP__
#define _EX_HPP__

#include <iostream>

template <typename T>
T compare(T l, T r)
{
    return (l > r) ? 1 : (l < r) ? -1 : 0;
}


template <typename T>
T compare(const char *T l, const char *T r)
{
    return (l > r) ? 1 : (l < r) ? -1 : 0;
}
#endif
