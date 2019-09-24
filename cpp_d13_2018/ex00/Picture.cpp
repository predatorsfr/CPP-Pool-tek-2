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
            data = "ERROR\n";
            return (false);
        }
        while (getline(files, str)){
        data += str;
        data += '\n';
    }
        files.close();
        return (true);
}

Picture::Picture(const std::string &file)
{
    getPictureFromFile(file);
}
Picture::Picture()
{
    data = "";
}
