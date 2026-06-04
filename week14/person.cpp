#include "person.h"

// 생성자
Person::Person(string id, Date birthDate) : id(id), birthDate(birthDate) {}

// 소멸자
Person::~Person() {}

// print 함수
void Person::print() const
{ 
  cout << "주민등록번호: " << id << endl;
  cout << "생년월일: "; 
  birthDate.print();
  cout << endl << endl;
}