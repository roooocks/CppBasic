#pragma once

class Pokemon
{
private:
    long hp;
public:
    Pokemon();
    Pokemon(int hp);
    Pokemon(const Pokemon& pokemon);

    void set(long hp);
    long getHp() const;
};