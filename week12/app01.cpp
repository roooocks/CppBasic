#include <iostream>
#include <string>

using namespace std;

class Pokemon
{
private:
    long hp;
public:
    Pokemon(): hp(1) {}
    Pokemon(int hp): hp(hp) {}
    Pokemon(const Pokemon& pokemon) : hp(pokemon.hp) {}

    void set(long hp);
    long getHp() const;
};

void Pokemon::set(long hp)
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
    // Invocation (부모 클래스의 기능을 명시적으로 호출하는 것)
    Pickachu(): Pokemon(), electric_attack(10) {}
    Pickachu(int hp, int electric_attack): Pokemon(hp), electric_attack(electric_attack) {}
    Pickachu(const Pickachu& pickachu): Pokemon(pickachu), electric_attack(pickachu.electric_attack) {}

    void set(int hp, int damage) // 오버로딩, 오버라이딩 관련 내용
    {
        // this->hp = hp;   // hp는 private
        
        // // Delegation (자식이 직접 구현하거나 처리하지 않고, 그 책임을 부모(또는 다른 객체)에게 맡기는 설계 방식)
        // HP 설정 책임을 Pokemon에게 맡겼다 (Invocation도 포함이긴하다;;)
        Pokemon::set(hp);

        electric_attack = damage;
        // assert(gpa >= 0 && gpa <= 4.5); // if문인데 안맞으면 에러 띄운다.

        // private
        // this->hp = ....
        // hp = ...
    }

    int getElectricAttack() const
    {
        // const라서 값이 안바뀌는 것을 보장한다.
        return electric_attack;
    }
};

int main()
{
    // Invocation 이전
    //// Pokemon 객체 인스턴스화하고 사용
    //Pokemon pokemon;
    //pokemon.set(100);
    //cout << "Pokemon 객체의 정보: " << endl;
    //cout << "포켓몬의 체력: " << pokemon.getHp();
    //cout << endl << endl;

    //// Pickachu 클래스 인스턴스화하고 사용
    //Pickachu pickachu;
    //pickachu.set(150, 23);
    ////pickachu.setElectricAttack(23);
    //cout << "Pickachu 객체의 정보: " << endl;
    //cout << "피카츄의 체력: " << pickachu.getHp() << endl;
    //cout << "피카츄의 전기 공격: " << pickachu.getElectricAttack();


    // Invocation 이후
    //Pickachu pickachu; // 1. 일반 생성자
    //cout << pickachu.getHp() << endl;
    //cout << pickachu.getElectricAttack() << endl;

    Pickachu pickachu(500, 4000); // 2. 매개변수 생성자
    //cout << pickachu.getHp() << endl;
    //cout << pickachu.getElectricAttack() << endl;

    Pickachu pickachu2(pickachu); // 3. 복사 생성자
    cout << pickachu2.getHp() << endl;
    cout << pickachu2.getElectricAttack() << endl;
    return 0;
}