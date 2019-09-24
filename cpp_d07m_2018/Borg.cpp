/*
** EPITECH PROJECT, 2019
** RSD64
** File description:
** Borg.cpp
*/

Borg()
{
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << '\n' << "Your biological characteristics and technologies will be assimilated." << '\n' "Resistance is futile." << std::endl;
}
void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *coeur)
{
    _core = coeur;
}

void Federation::Starfleet::Ship::checkCore(void)
{
    if((_core->checkReactor())->isStable() == false)
    std::cout << "Critical failure imminent." << std::endl;
    else
    std::cout << "Everything is in order." << std::endl;

}
