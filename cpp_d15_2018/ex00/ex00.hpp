/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** ex00.hpp
*/

#ifndef _EX_HPP__
#define _EX_HPP__

#include <iostream>

template <typename T>
void swap (T& a, T& b) {
    T c(a); a=b; b=c;
}

template <typename T>
T max (T a, T b) {
  return ((a>b)? a : b);
}

template <typename T>
T min (T a, T b) {
  return ((a<b)? a : b);
}

template <typename T>
T add (T a, T b) {
  return (a+b);
}

#endif
