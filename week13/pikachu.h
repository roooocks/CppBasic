#pragma once

#include "pokemon.h"

//class Pickachu final : public Pokemon // 피카츄 클래스의 상속 불가 (포켓몬은 상속 가능)
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