#include "name.h"

// 생성자
Name::Name(string last, string first) : last(last), first(first) {}

// 소멸자
Name::~Name() {}

// print 멤버 함수
void Name::print() const
{
	cout << "직원 이름: " << last << " " << first;
}