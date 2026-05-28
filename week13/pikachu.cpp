#include "pikachu.h"

Pickachu::Pickachu() : Pokemon(), electric_attack(10) {}
Pickachu::Pickachu(int hp, int electric_attack) : Pokemon(hp), electric_attack(electric_attack) {}
Pickachu::Pickachu(const Pickachu& pickachu) : Pokemon(pickachu), electric_attack(pickachu.electric_attack) {}

void Pickachu::set(int hp, int damage)
{
    Pokemon::set(hp);

    electric_attack = damage;
}

int Pickachu::getElectricAttack() const
{
    return electric_attack;
}