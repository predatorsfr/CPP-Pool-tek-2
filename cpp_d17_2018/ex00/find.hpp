/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** find.hpp
*/

#ifndef _EX_HPP__
#define _EX_HPP__

template <typename T>
T::iterator do_find (T& a, int b) {
    return std::find(a.begin(), a.end(), b);
}

#endif
