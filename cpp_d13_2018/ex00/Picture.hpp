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
    std::string data;
    Picture(const std::string &file);
    Picture();
    bool getPictureFromFile(const std::string &file);

};

#endif
