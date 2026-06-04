#include "date.h"
  
// 매개변수가 있는 생성자                                                                                                                                           
Date::Date(int year, int month, int day) : year(year), month(month), day(day)
{
   // 월
  if((month < 1) ||(month > 12))
  {
    cout << "Month is out of range. ";
    assert(false); // 프로그램 중단
  }

  // 일
  int daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 
                           31, 30, 31, 30 ,31};
  if((day < 1) || (day > daysInMonths[month]))
  {
    cout << "Day out of range! ";
    assert(false);
  }

  // 년
  if((year < 1900) ||(year > 2099))
  {
    cout << "Year out of range! " ;
    assert(false);
  }
}

// 소멸자                                                  
Date::~Date() {}

// print 멤버 함수                                                    
void Date::print() const 
{
  cout << year << "/" << month <<  "/" << day << endl;
}