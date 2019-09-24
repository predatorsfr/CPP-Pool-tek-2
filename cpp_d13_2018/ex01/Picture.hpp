/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Picture.hpp
*/

#ifndef _PIC_HPP__
#define _PIC_HPP__


#include <iostream>
#include <string>

class Picture {
public:
    std::string _data;
    Picture();
    ~Picture();
    Picture(const std::string &file);
    Picture &operator=(const Picture &Pictures);
    bool getPictureFromFile(const std::string &file);

};

#endif
