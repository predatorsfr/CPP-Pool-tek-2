/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** SickKoala1.cpp
*/

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string string)
{
    this->name = string;
}

SickKoala::~SickKoala(void)
{
    std::cout << "Mr."<< name <<": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke()
{
    std::cout << "Mr."<< name <<": Gooeeeeerrk!!" << std::endl;
}

void SickKoala::overDrive(std::string str)
{
    while (str.find("Kreog!") != std::string::npos)
        str.replace(str.find("Kreog!"), 6, "1337!");
    std::cout << "Mr." << name << ": " << str << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    const char *cmp = str.c_str();

    if (strcmp(cmp, "Buronzand") == 0){
        std::cout << "Mr."<< name << ": And you’ll sleep right away!" << std::endl;
        return(true);
    } else if (strcasecmp(cmp, "mars") == 0) {
        std::cout << "Mr."<< name << ": Mars, and it kreogs!" << std::endl;
        return(true);
    } else {
        std::cout << "Mr."<< name << ": Goerkreog!" << std::endl;
        return(false);
    }
}
