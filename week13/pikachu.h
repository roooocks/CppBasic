#pragma once

#include "pokemon.h"

class Pickachu : public Pokemon
{
private:
    int electric_attack;
public:
    Pickachu();
    Pickachu(int hp, int electric_attack);
    Pickachu(const Pickachu& pickachu);

    void set(int hp, int damage);
    int getElectricAttack() const;
};