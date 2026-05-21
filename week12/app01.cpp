#include <iostream>
#include <string>

using namespace std;

class Pokemon
{
private:
    long hp;
public:
    void setHp(long hp);
    long getHp() const;
};

void Pokemon::setHp(long hp)
{
    this->hp = hp;
}

long Pokemon::getHp() const
{
    return hp;
}

// is-a 관계
class Pickachu : public Pokemon
{
private:
    int electric_attack;
public:
    void setElectricAttack(int damage)
    {
        electric_attack = damage;
        // assert(gpa >= 0 && gpa <= 4.5); // if문인데 안맞으면 에러 띄운다.
    }

    int getElectricAttack() const
    {
        return electric_attack;
    }
};

int main()
{
    // Pokemon 객체 인스턴스화하고 사용
    Pokemon pokemon;
    pokemon.setHp(100);
    cout << "Pokemon 객체의 정보: " << endl;
    cout << "포켓몬의 체력: " << pokemon.getHp();
    cout << endl << endl;
    // Pickachu 클래스 인스턴스화하고 사용
    Pickachu pickachu;
    pickachu.setHp(150);
    pickachu.setElectricAttack(23);
    cout << "Pickachu 객체의 정보: " << endl;
    cout << "피카츄의 체력: " << pickachu.getHp() << endl;
    cout << "피카츄의 전기 공격: " << pickachu.getElectricAttack();
    return 0;
}