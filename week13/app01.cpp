#include <iostream>
#include <string>

#include "pikachu.h"
#include "squirtle.h"

using namespace std;

int main()
{
    Pickachu pickachu(500, 4000);
    cout << pickachu.getHp() << endl;
    cout << pickachu.getElectricAttack() << endl;

    Pickachu pickachu2(pickachu);
    cout << pickachu2.getHp() << endl;
    cout << pickachu2.getElectricAttack() << endl;

    Squirtle squirtle(1000, 3000);
    cout << squirtle.getHp() << endl;
    cout << squirtle.getHydroAttack() << endl;

    return 0;
}