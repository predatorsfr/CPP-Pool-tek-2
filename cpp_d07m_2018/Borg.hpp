/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Borg.hpp
*/

namespace   Borg
{
    class Ship
    {
    private:
        int _side = 300;
        short _maxWarp = 9;
        WarpSystem::Core *_core;
    public:
        Borg();
        void checkCore();
        void setupCore(WarpSystem::Core *coeur);
    };
}
