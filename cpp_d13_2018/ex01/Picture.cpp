/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Picture.cpp
*/

#include "Picture.hpp"
#include <fstream>

bool Picture::getPictureFromFile(const std::string &file)
{
    std::string str;
    std::ifstream files(file);
        if (!files) {
            _data = "ERROR\n";
            return (false);
        }
        while (getline(files, str)){
        _data += str;
        _data += '\n';
    }
        files.close();
        return (true);
}

Picture::Picture()
{
    _data = "";
}

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}


Picture::~Picture()
{

}

Picture &Picture::operator=(const Picture &Pictures)
{
    _data = Pictures._data;

    return (*this);
}
