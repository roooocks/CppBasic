//#pragma once

// #pragma once가 요즘 모던한 방식인데, 아래 방식은 옛날 방식이다.
// 중복 포함 방지를 하는 역할을 해준다.

// #ifndef FILE_NAME
// #define FILE_NAME
// 내용
// #endif

#ifndef POKEMON_H
#define POKEMON_H
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
#endif