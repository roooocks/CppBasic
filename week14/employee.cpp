#include "employee.h"

// 생성자
Employee::Employee(string last, string first, int salary) : name(last, first), salary(salary)
{
  assert(salary > 500 and salary < 100000000);
}

// 소멸자
Employee::~Employee() {}

// print 멤버 함수
void Employee::print() const
{
  name.print();
  cout << "급여: " << int(salary) << endl << endl;
} 