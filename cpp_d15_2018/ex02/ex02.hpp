/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** ex02.hpp
*/

#ifndef _EX_HPP__
#define _EX_HPP__

#include <iostream>
#include <string>

template <typename T>
T min(T a, T b)
{
    std::cout << "template min" << std::endl;
    if (a <= b)
    return (a);
    else
    return (b);
}

int min(int a,int b)
{
    std::cout << "non-template min" << std::endl;
    if (a <= b)
    return (a);
    else
    return (b);
}

template <typename T>
T templateMin(T *a, T b)
{
    T c = a[0];

    for(int i = 1; i < b; i++)
    c = min<T>(a[i],c);
    return c;
}

int nonTemplateMin(int *a, int b)
{
    int c = a[0];

    for(int i = 1; i < b; i++)
    c = min(a[i],c);
    return c;
}

#endif
