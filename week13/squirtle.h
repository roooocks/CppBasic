#pragma once

#include "pokemon.h"

class Squirtle : public Pokemon
{
private:
    int hydroAttack;
public:
    Squirtle();
    Squirtle(int hp, int hydroAttack);
    Squirtle(const Squirtle& squirtle);

    void set(int hp, int damage);
    int getHydroAttack() const;
};
