#include "squirtle.h"

Squirtle::Squirtle() : Pokemon(), hydroAttack(10) {}
Squirtle::Squirtle(int hp, int electric_attack) : Pokemon(hp), hydroAttack(electric_attack) {}
Squirtle::Squirtle(const Squirtle& squirtle) : Pokemon(squirtle), hydroAttack(squirtle.hydroAttack) {}

void Squirtle::set(int hp, int damage)
{
    Pokemon::set(hp);

    hydroAttack = damage;
}

int Squirtle::getHydroAttack() const
{
    return hydroAttack;
}