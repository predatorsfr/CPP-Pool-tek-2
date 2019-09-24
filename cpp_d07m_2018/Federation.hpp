/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Federation.hpp
*/

#include <strings.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <iterator>
#include <regex>


#ifndef FEDERATION_H
#define FEDERATION_H

namespace Federation
{
    class Ship
    {
        private:
        int _length;
        int _width;
        std::string _name;
        short _maxWarp;
        WarpSystem::Core *_core;
        public:
        Ship(int, int, std::string);
        void checkCore();
        void setupCore(WarpSystem::Core *coeur);
    };
    namespace Starfleet
    {
        class Ship
        {
            private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core *_core;
            public:
            Ship(int, int, std::string, short);
            void checkCore();
            void setupCore(WarpSystem::Core *coeur);
        };
    }
}

#endif
