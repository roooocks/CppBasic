#include "person.h"

int main()
{
  // 인스턴스화
  Date date1(2006, 11, 2);
  Person person1("061102-3123987", date1); // aggregation

  Date date2(1999, 1, 7);
  Person person2("990107-2133486", date2); // aggregation

  // 출력
  person1.print();
  person2.print();

  return 0;
}