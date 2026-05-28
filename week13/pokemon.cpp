#include "pokemon.h"

Pokemon::Pokemon() : hp(1) {}
Pokemon::Pokemon(int hp) : hp(hp) {}
Pokemon::Pokemon(const Pokemon& pokemon) : hp(pokemon.hp) {}

void Pokemon::set(long hp)
{
    this->hp = hp;
}

long Pokemon::getHp() const
{
    return hp;
}