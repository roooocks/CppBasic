#include <iostream>
#include <string>

#include "pikachu.h"

using namespace std;

int main()
{
    Pickachu pickachu(500, 4000);
    cout << pickachu.getHp() << endl;
    cout << pickachu.getElectricAttack() << endl;

    Pickachu pickachu2(pickachu);
    cout << pickachu2.getHp() << endl;
    cout << pickachu2.getElectricAttack() << endl;

    return 0;
}