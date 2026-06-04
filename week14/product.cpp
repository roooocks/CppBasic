#include "product.h"

// 생성자
Product::Product(string nm, int up) : name(nm), unitPrice(up) {}

// 소멸자
Product::~Product()
{
} 

// getPrice 멤버 함수
int Product::getPrice() const
{
  return unitPrice;
}